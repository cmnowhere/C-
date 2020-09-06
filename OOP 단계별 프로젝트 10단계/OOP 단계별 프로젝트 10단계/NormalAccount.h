#ifndef __NormalAccount_h__
#define __NormalAccount_h__
#include "Account.h"

class NormalAccount :public Account
{
private:
	double ratio;
public:
	NormalAccount(String accid, int money, String name, double r);
	virtual void GetDeposit(int m);
	virtual void GetCheckInfo();
};

#endif