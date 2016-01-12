#ifndef _FEEMANAGER_
#define _FEEMANAGER_

class FeeManager
{
private:
	double jiuCanFee;
	double waiMaiFee;
public:
	FeeManager();
	double getWaiMaiFee();
	double getJiuCanFee();
	void addWaiMaiFee(double x);
	void addJiuCanFee(double x);
};

#endif