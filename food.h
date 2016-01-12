#ifdef _FOOD_
#define _FOOD_

class Food
{

private:
	char* name;
	double price;

public:
	Food(){};
               Food(char*s,double p);
               void setName(char*s);
               char* getName(char*s);
               char* getPrice();
               double setPrice();
               void setPrice(double p);
               void showMessage();
	~Food();
};

#endif