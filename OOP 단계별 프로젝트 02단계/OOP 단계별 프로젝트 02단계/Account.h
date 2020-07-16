#ifndef __Account_h__
#define __Account_h__

#define LEN 100

class Account
{
private:
	int AccID;
	char* Name;

public:
	int Balance; // ��� ������ ���������ڰ� public ���� ����Ǿ� �־� ���Ŀ� ������ �� �� ����

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