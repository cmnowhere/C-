#ifndef __Account_h__
#define __Account_h__

#define LEN 100

typedef struct
{
	int AccountNum;
	char AccountName[10];
	int Balance;
}Customer;

typedef struct
{
	Customer cus[LEN];
	int NumOfData;
}Account;

void AInit(Account* pa);;
void MakeAccount(Account* pa);
void Deposit(Account* pa);
void Withdrawal(Account* pa);
void AllCheckMoney(Account* pa);
void ShowMenu();
void AccountStart(Account* pa);
#endif
