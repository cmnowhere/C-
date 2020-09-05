#ifndef __Account_h__
#define __Account_h__

#define LEN 100
using namespace std;

class Account
{
private:
	int AccID;
	char* Name;
	int Balance;

public:
	Account(int accid, const char name[]);

	int GetAccID();

	char* GetName();

	virtual int GetDeposit(int m) = 0;

	int GetWithDraw(int m);

	virtual void GetCheckMoney() = 0;

	~Account()
	{
		delete[] Name;
	}
};

class NormalAccount :public Account
{
private:
	int AccID;
	char* Name;
	int Balance;
	double ratio;
public:
	NormalAccount(int accid, const char name[],double r);
	virtual int GetDeposit(int m);
	virtual void GetCheckMoney();
};

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