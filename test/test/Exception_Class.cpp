#include <iostream>

using namespace std;

class exceptionclass
{
public:
	virtual void exceptionerror() = 0;
};

class depositerror :public exceptionclass
{
	int money;
public:
	depositerror(int m) :money(m) {}

	void exceptionerror()
	{
		cout << money<<"은 입금 할 수 없습니다." << endl;
	}
};

class withdrawerror : public exceptionclass
{
	int money;
public:
	withdrawerror(int m) :money(m) {}

	void exceptionerror()
	{
		cout << "출금 할 수 없습니다." << endl;
	}
};

class account
{
	int money;
public:
	account(int n) :money(n) {}

	void deposit(int deposit_money)
	{
		depositerror expn(deposit_money);

		if (deposit_money <= 0)
			throw expn;

		money += deposit_money;
	}

	void withdraw(int withdraw_money)
	{
		withdrawerror expn(withdraw_money);

		if (withdraw_money > money)
			throw expn;

		money -= withdraw_money;
	}

	void showmoney()
	{
		cout << "balance : " << money << endl;
	}
};


int main()
{
	account cm(10000);
	try
	{
		cm.deposit(5000);
		cm.deposit(-500);
	}
	catch (exceptionclass& expn)
	{
		expn.exceptionerror();
	}

	cm.showmoney();

	try
	{
		cm.withdraw(10000);
		cm.withdraw(6000);
	}
	catch (exceptionclass& expn)
	{
		expn.exceptionerror();
	}

	cm.showmoney();

	return 0;
}