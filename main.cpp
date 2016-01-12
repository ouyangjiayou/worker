#include <iostream>
#include  "food.h"
#include "menuview.h"
#include "foodmanager.h"
#include "clientmanager.h"
#include "feemanager.h"
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	FeeManager feem;
	MenuView mv;
	ClientManager cm;
	FoodManager fm;
	fstream ioFile;
	int clientChoice;
	int clientService;
	int mainChoice;
	int curClient;
	int queryChoice;
	int foodChoice;
	int viewChoice;

	int menuChoice;
	int viewChoice;
	int menuChoice;
	int menDingDanChoice;
	int menDingDanChoice;
	ioFile.open("a.txt",ios::in);

	whiel(lioFile.eof())
	{
		char* s;
		double p;
		s=new char[20];
		ioFile>>s>>p;
		fm.addFood(s,p);
	}

	ioFile.close();

	while(true){
		viewChoice = mv.showViewChoice();
		if(viewChoice ==1)
		{
			clientService = mv.showRegister();
			if(clientService ==1)
			{
				char*name,*phone;
				name = new char[30];
				phone = new char[30];
				cout<<""<<endl;
				cout<<""<<cm.getClientNum()+1<<endl;
				curClient =cm.getClientNum();
				cout<<"";cin>>phone;
				Client cc(name,phone);
				cc.setNumber(cm.getClientNum());

				cm.addClient = mv.showMain();
				if(mainChoice ==1)
				{
					cm.client[curClient].setTYpe(1);
					mv.showJiuCan();
					while(true)
					{
						fm.showFood();
						int choices;
						choices = mv.showClient();
						if(choices ==1)
						{
							char*n;
							int code;
							n=new char[20];
							int nums;
							double prices;
							cout<<":";cin>>code;
							n=fm.food[code].getName();
							cout<<""<<n<<endl;
							prices = fm.getPriceByName(n);
							cout<<"";cin>>nums;
							cm.client[curClient].client_fm.addFood(Food(n,prices));
							cm.client[curClient].addFee(num*prices);
							cm.client[curClient].num[cm.client[curClient].client_fm.getTotal() - 1] = nums;
							cout<<""<<cm.client[curClient].getFee()<<endl<<endl;
						}
						else if(choices ==2)
						{
							cout<<""<<endl;
							while(true){

								cm.client[curClient].showClientMessage();
								menDingDanChoice = mv.showMendDingDan();
								if(menDingDanChoice == 1)
								{
									cm.client[curClient].changNum();
								}else if(menDingDanChoice == 2){
									cm.client[curClient].deleFood();
								}else if(menDingDanChoice == 3)break;
							}
						}else if(choices == 3)break;
					}
					feem.addJiuCanFee(cm.client[curClient].getFee());
					cout<<""<<endl;
					cm.client[curClient].showClientMessage();
				}
				else if(mainChoice == 2)
				{
					cm.client[curClient].setType(2);
					mv.showJiuCan();
					while(true)
					{
						fm.showFood();
						int choices;
						choices = mv.showClient();
						if(choices == 1){
							char*n;
							int code;
							n=new char[20];
							int nums;
							double prices;
							cout<<"请输入食物编号: ";cin>>code;
							n=fm.food[code].getName();
							cout<<"您选择食物"<<n<<endl;
							prices = fm.getPriceByName(n);
							cout<<"请输入数量";cin>>nums;
							cm.client[curClient].client_fm.addFood(Food(N,prices));
							cm.client[curClient].addFee(nums*prices);
						cm.client[curClient].num[cm.client[curClient].client_fm.getTotal() -1] = nums;
						cout<<"当前的总费用是"<<cm.client[curClient].getFee()<<endl<<endl;

						}else if(choices ==2)
						{
							cout<<"您当前的订单是"<<endl;
							while(true){
								cm.client[curClient].showClientMessage();
								menDingDanChoice = mv.showMendDingDan();
								if(menDingDanChoice == 1){
									cm.client[curClient].changNum();
								}else if(menDingDanChoice == 2){
									cm.client[curClient].deleFood();
								}else if(menDingDanChoice ==3)break;
							}
						}
						else if(choices ==3)break;
					}
					feem.addWaiMaiFee(cm.client[curClient].getFee());
					cout<<"您的订单是:"<<endl;
					cm.client[curClient].showClientMessage();
				}
			}
			else if(clientService ==2){
				while(true)
				{
					queryChoice = mv.showQuery();
					if(queryChoice == 1)
					{
						cout<<""<<endl;
						char*s;
						s=new char[20];
						cin>>s;
						cm.showQuery(s);
					}else if(queryChoice == 2)break;
				}
			}
		}
		else if(viewChoice ==2){
			while(true)
			{
				fm.showFood();
				foodChoice = mv.showMend();
				if(foodChoice ==1)
				{
					char*n;
					double p;
					n=new char[20];
					cout<<"";cin>>n;
					cout<<"";cin>>p;
					fm.addFood(Food(n,p));
				}else if(foodChoice == 2){
					fm.changePrice();
				}
				else if(foodChoice == 3){
					fm.deleFood();
				}else if(foodChoice == 4)break;
			}
			else if(viewChoice == 3)
			{
				cout<<""<<cm.getClientNum()<<""<<feem.getJiuCanFee()+feem.getWaiMaiFee()<<""<<endl;
				cout<<""<<feem.getJiuCanFee()<<"";
				cout<<""<<feem.getWaiMaiFee()<<""<<endl<<endl;
				cout<<"-------------------------------------"<<endl;
				cm.showAll();
			}else if(viewChoice == 4){
				ioFile.open("a.txt",ios::out);
				for(int i=0;i<fm.getTotal();i++){
			ioFile<<setw(10)<<setiosflags(ios::left)<<fm.food[i].getName()<<"\t"<<fm.food[i].getPrice();
			               if(i != (fm.getTotal() - 1))
			               	ioFile<<endl;
				}
				ioFile.close();
				cout<<""<<endl<<endl<<endl;
				system("pause");
				return 0;
			}
		}
	}

             
}
