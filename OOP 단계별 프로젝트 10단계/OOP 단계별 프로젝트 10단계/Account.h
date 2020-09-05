#ifndef __Account_h__
#define __Account_h__

#define LEN 100
using namespace std;

class Account
{
private:
	char* AccID;
	char* Name;
	int Balance;

public:
	Account() {}

	Account(const char accid[], int money, const char name[]);

	char* GetAccID();

	char* GetName();

	virtual void GetDeposit(int m);

	int GetWithDraw(int m);

	virtual void GetCheckInfo() {};

	int GetMoney();


	~Account()
	{
		delete[] Name;
	}
};

#endif