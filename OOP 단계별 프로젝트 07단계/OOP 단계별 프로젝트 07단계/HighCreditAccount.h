#ifndef __HighCreditAccount_h__
#define __HighCreditAccount_h__
#include "Account.h"

class HighCreditAccount :public Account
{
private:
	int AccID;
	char* Name;
	int Balance;
	double ratio;
	int cre;
public:
	HighCreditAccount(int accid, const char name[], double r, int c);
	virtual int GetDeposit(int m);
	virtual void GetCheckMoney();
};

#endif