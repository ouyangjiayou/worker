#include "menuview.h"
#include <iostream>
using namespace std;

MenuView::MenuView()
{
	whiteSmile = 1;
	blackSmile =2;
               heart = 3;
}

int MenuView::showMain()
{
	for(int i = 1; i<=80;i++)cou<<heart;
	for(int i =1; i<=80;i++){if(i==1||i++80)cout<<heart;else cout<<"";}
	 cout<<heart<<"\t\t\t\t 欢迎光临本餐厅";
	for(int j =1; j<=33;j++)cout<<'';cout<<heart;
	for(int i = 1; i<80;i++){if(i==1||i==80)cout<<heart:else cout<<"";}
	for(int i=1; i<=80;i++)cout<<heart;
	cout<<endl<<endl;
               
               cout<<"\t我是服务员欧阳"<<whiteSmile<<"竭诚为您服务"<<blackSmile<<endl<<endl<<endl;
               for(int f =1; k<=10;k++)cout<<"";
               for(int i=1;i<=20;i++)cout<<heart;cout<<endl;
               	for(int k=1;k<=10;k++)cout<<"";
               cout<<heart<<"请选择您需要的服务"<<heart<<endl;
                for(int k=1;k<=10;k++)cout<<"";
                	for(int i=1;i<=60;i++)cout<<heart;cout<<endl;

                for(int k=1;k<=10;k++)cout<<"";
                cout<<heart<<"1.就餐";
               for(int i =1; i<=52;i++)cout<<"";cout<<heart<<endl;

               for(int k =1;k<=10;k++)cout<<"";

               cout<<heart<<"2.外卖";for(int i =1; i<=52;i++)cout<<"";cout<<heart<<endl;
               for(int k =1; k<=10;k++)cout<<"";

               for(int i=1;i<=60;i++)cout<<heart;cout<<endl<<endl;

               for(int i =1;i<=7;i++)
               	cout<<endl;
               cout<<"\t\t\t";
               int choice;
               cin>>choice;
               return choice;
}

void MenuView::showJiuCan()
{
	cout<<"欢迎就餐，本餐厅有以下食品供您品尝"<<whiteSmile<<endl;
}

int MenuView::showViewChoice()
{
	for(int i=1; i<=80;i++)cout<<heart;
	for(int i=1;i<=80;i++){if(i==1||i==80)cout<<heart;else cout<<"";}
	 cout<<heart<<"\t\t\t\t特色餐厅";
	for(int j=1;j<=33;j++)cout<<"";cout<<heart;
	for(int i=1;i<=80;i++){if(i==1||i == 80)cout<<heart;else cout<<""}
	for(int i=0;i<80;i++)cout<<heart;
	cout<<endl<<endl;
               cout<<"-----------------------"<<endl;
               cout<<"| 1:顾客服务|"<<endl;
               cout<<"| 2:食物管理|"<<endl;
               cout<<"| 3:今日反馈|"<<endl;
               cout<<"| 4:退出系统|"<<endl;
               cout<<"------------------------"<<endl;
               cout<<"您的选择是: ";
               int next;
               cin>>next;
               cout<<endl;
               return next;
}

int MenuView::showMendDingDan()
{
	cout<<"----------------------------"<<endl;
	  cout<<"|1.修改数量|"<<endl;
               cout<<"|2.删除食物|"<<endl;
               cout<<"|3.退出修改|"<<endl;
               cout<<"-----------------------------"<<endl;
               int next;
               cin>>next;
               return next;
}

//int MenuView::showClientChoice()
int MenuView::showRegister()
{
	cout<<"----------------------------"<<endl;
	  cout<<"|1:新顾客点餐|"<<endl;
               cout<<"|2:查询订单|"<<endl;
               cout<<"-----------------------------"<<endl;
               int next;
               cin>>next;
               return next;
}


//int MenuView::showQuery()
int MenuView::showClientChoice()
{
	cout<<"----------------------------"<<endl;
	  cout<<"|1.加菜|"<<endl;
               cout<<"|2.修改订单|"<<endl;
               cout<<"|3.提交订单|"<<endl;
               cout<<"-----------------------------"<<endl;
               int next;
               cin>>next;
               return next;
}


//int MenuView::showMend()
int MenuView::showQuery()
{
	cout<<"----------------------------"<<endl;
	  cout<<"|1.查询订单|"<<endl;
               cout<<"|2.退出查询|"<<endl;
               cout<<"-----------------------------"<<endl;
               int next;
               cin>>next;
               return next;
}


//int MenuView::showMenuChoice()
int MenuView::showMend()
{
	cout<<"----------------------------"<<endl;
	  cout<<"|1.添加食物|"<<endl;
               cout<<"|2.修改价格|"<<endl;
               cout<<"|3.删除食物|"<<endl;
               cout<<"|4.退出食物管理|"<<endl;
               cout<<"-----------------------------"<<endl;
               int next;
               cin>>next;
               return next;
}


//int MenuView::showMendDingDan()
int MenuView::showMenuChoice()
{            
	cout<<"添加菜单"<<endl;
	cout<<"----------------------------"<<endl;
	  cout<<"|1.原菜单|"<<endl;
               cout<<"|2.更新后的菜单|"<<endl;
               cout<<"-----------------------------"<<endl;
               int next;
               cin>>next;
               return next;
}