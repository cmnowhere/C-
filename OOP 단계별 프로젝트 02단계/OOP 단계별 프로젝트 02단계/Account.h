#ifndef __Account_h__
#define __Account_h__

#define LEN 100

class Account
{
private:
	int AccID;
	char* Name;

public:
	int Balance; // 멤버 변수의 접근지정자가 public 으로 선언되어 있어 차후에 문제가 될 수 있음

	Account(int accid, const char name[]) :AccID(accid)
	{
		Name = new char[strlen(name) + 1];
		strcpy_s(Name, strlen(name) + 1, name);
		Balance = 0;
	}
	int GetAccID()
	{
		return AccID;
	}
	char* GetName()
	{
		return Name;
	}
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
};

#endif