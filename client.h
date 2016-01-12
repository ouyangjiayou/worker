#ifndef _CLIENT_
#define _CLIENT_
#include "foodmanager"
#include <iostream>
using namespace std;

class Client{
private:
	int number;
	int type;
	double fee;
	char*name;
	char*phone;
public:
	Client(){}
	char*getName();
	int num[100];
               FoodManager client_fm;
               Client(char*n,che*p);
               int getNumber();
               void setNumber(int n);
               int getType();
               void setType(int n);
               void addFee(double x);
               double getFee();
               void showClientMessage();
               void changNum();
               void deleFood();
};

#endif