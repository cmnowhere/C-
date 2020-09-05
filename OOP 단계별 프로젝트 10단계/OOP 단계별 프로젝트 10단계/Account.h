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
	Account() {}
	Account(int accid, int money, const char name[]);

	int GetAccID();

	char* GetName();

	virtual void GetDeposit(int m)
	{
		Balance += m;
	}

	int GetWithDraw(int m);

	virtual void GetCheckInfo() {};

	int GetCheckMoney();


	~Account()
	{
		delete[] Name;
	}
};


#endif