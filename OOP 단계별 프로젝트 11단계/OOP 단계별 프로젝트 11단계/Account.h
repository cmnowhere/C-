#ifndef __Account_h__
#define __Account_h__

#define LEN 100

#include "String.h"

using namespace std;

class Account
{
private:
	String AccID;
	String Name;
	int Balance;

public:
	Account(String accid, int money, String name);

	String GetAccID();

	String GetName();

	virtual void GetDeposit(int m);

	int GetWithDraw(int m);

	virtual void GetCheckInfo() {};

	int GetMoney();
};

#endif