#ifndef __Bank_h__
#define __Bank_h__
#include "Account.h"

class Bank
{
private:
	Account* arr[LEN];
	int NumOfAcc;
public:
	Bank() :NumOfAcc(0) {}

	void MakeAccount();
	void Deposit();
	void Withdrawal();
	void AllCheckMoney();
	void ShowMenu();
	void ProgramStart();
	~Bank()
	{
		for (int i = 0; i < NumOfAcc; i++)
			delete arr[i];
	}
};

#endif