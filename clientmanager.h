#ifndef _CLIENTMANAGER_
#define _CLIENTMANAGER_
#include "client.h"
#include <iostream>
using namespace std;
#define MAX_CLIENT_NUM 60
class ClientManager
{
public:
	ClientManager();
	int clientNum;
	Client client[MAX_CLIENT_NUM];
	void addClientNum();
	void showQuery(char*s);
	int getClientNum();
	void showAll();
};

#endif
