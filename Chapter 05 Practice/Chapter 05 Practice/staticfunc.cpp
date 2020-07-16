#include <iostream>
using namespace std;

class test
{
	int num1;
	mutable int num2;

public:
	static int num3;

	test(int n) :num1(n), num2(n) {}

	static void adder(int n)
	{
		num3 += n;
	}

	void sub(int n) const  // const ����� �Լ��� mutable ����� ������ ���� ���� �����ϰ� �� �� ����.
	{
		num2 -= n;
	}

	int getnum2()
	{
		return this->num2;
	}
};

int test::num3 = 10;

int main()
{
	test t(10);

	test::adder(10);

	cout << test::num3 << endl;

	t.sub(3);

	cout << t.getnum2() << endl;

	return 0;
}