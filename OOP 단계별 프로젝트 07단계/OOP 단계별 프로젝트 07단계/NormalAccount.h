#ifndef __NormalAccount_h__
#define __NormalAccount_h__
#include "Account.h"

class NormalAccount :public Account
{
private:
	int AccID;
	char* Name;
	int Balance;
	double ratio;
public:
	NormalAccount(int accid, const char name[], double r);
	virtual int GetDeposit(int m);
	virtual void GetCheckMoney();
};

#endif