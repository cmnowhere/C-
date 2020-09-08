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
		cout << money << "은 입금 할 수 없습니다." << endl;
	}
};

class Withdraw_Error : public ExceptionClass
{
	int money,balance;
public:
	Withdraw_Error(int m,int b) :money(m),balance(b) {}

	void Exception_Error()
	{
		cout << "잔액이 부족합니다." << endl << endl;
		cout << "현재 잔액 : " << balance << endl << endl;
		cout << "출금하려는 금액 : " << money << endl << endl;
	}
};

#endif