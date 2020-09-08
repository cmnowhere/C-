#ifndef __Account_Exception__
#define __Account_Exception__

#include <iostream>

using namespace std;

class ExceptionClass
{
public:
	virtual void Exception_Error() = 0;
};

class Deposit_Error :public ExceptionClass
{
private:
	int money;
public:
	Deposit_Error(int m) :money(m) {}

	void Exception_Error()
	{
		cout << money << "�� �Ա� �� �� �����ϴ�." << endl;
	}
};

class Withdraw_Error : public ExceptionClass
{
	int money,balance;
public:
	Withdraw_Error(int m,int b) :money(m),balance(b) {}

	void Exception_Error()
	{
		cout << "�ܾ��� �����մϴ�." << endl << endl;
		cout << "���� �ܾ� : " << balance << endl << endl;
		cout << "����Ϸ��� �ݾ� : " << money << endl << endl;
	}
};

#endif