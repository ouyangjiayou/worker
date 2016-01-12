#ifndef _FOODMANAGER_
#define _FOODMANAGER_
#include "food.h"

#define MAX_FOOD_NUM 99

class FoodManager{
int total;
public:
	FoodManager();
	int getTotal();
	Food food[MAX_FOOD_NUM];
	void addFood(Food f);
	void addFood(char*s,double p);
	void deleteFood();
	void changePrice();
	void showFood();
	char* getNameByList(int list);
	double getPriceByName(char* s);
	int getListByName(char* s);
	void setTotal(int x);
};
#endif