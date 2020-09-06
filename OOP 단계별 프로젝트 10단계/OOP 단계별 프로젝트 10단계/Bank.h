#ifndef __Bank_h__
#define __Bank_h__
#include "AccountArray.h"
#include "String.h"

class Bank
{
private:
	AccountArray<Account_PTR> arr;
	int NumOfAcc;
public:
	Bank() :NumOfAcc(0) {}

	void MakeAccount();
	void Deposit();
	void Withdrawal();
	void AllCheckMoney();
	void ShowMenu();
	void ProgramStart();
};

#endif