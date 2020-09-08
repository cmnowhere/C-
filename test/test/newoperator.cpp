#include <iostream>

using namespace std;

class test
{
	int n;
public:
	test(int n = 10) :n(n)
	{
		cout << "test constructor" << endl;
	}

	void* operator new(size_t size)
	{
		cout << "new operator" << endl;
		void* address = new char[size];
		return address;
	}

	void* operator new[](size_t size)
	{
		cout << "new[] operator" << endl;
		void* address = new char[size];
		return address;
	}

	~test()
	{
		cout << "test destroy" << endl;
	}
};

int main()
{
	test* t1 = new test[10];
	test* t2 = new test;

	delete t2;
	delete t1;
	return 0;
}