#include <iostream>
using namespace std;

int divide(int a, int b)
{
	try
	{
		if (a == 0)
			throw 1;
		else if (b == 0)
			throw 2;
		else
			return a / b;
	}
	catch (int expn)
	{
		if (expn == 1)
		{
			cout << "PASS!" << endl;
			throw 1;
		}
		else
		{
			cout << "Throw Pass!" << endl;
			throw 2;
		}
	}
}
int main()
{
	int num;
	try
	{
		num=divide(5, 3);
		cout << "�� : "<< num << endl;
		divide(5, 0);
		divide(0, 5);
	}
	catch (int expn)
	{
		if (expn == 1)
		{
			cout << "Catch!" << endl;
			cout << "���� 0�� �� �� �����ϴ�." << endl;
		}
		else
		{
			cout << "Throw Catch!" << endl;
			cout << "������ 0�� �ɼ� �����ϴ�." << endl;
		}
	}
}