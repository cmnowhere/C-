#include <iostream>
#include "Account.h"

using namespace std;

#define LEN 100

int main()
{
	Account account;

	AInit(&account);

	AccountStart(&account);

	return 0;
}

		