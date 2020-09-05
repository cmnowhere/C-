#include <iostream>
using namespace std;

class first
{
	char* str1;
public:
	first(const char* str)
	{
		str1 = new char[strlen(str) + 1];
		cout << "first()" << endl;
	}
	~first()
	{
		cout << "~first()" << endl;
		delete[]str1;
	}
};

class second : public first
{
	char* str2;
public:
	second(const char* str1, const char* str2) :first(str1)
	{
		this->str2 = new char[strlen(str2) + 1];
		cout << "second()" << endl;
	}
	~second()
	{
		cout << "~second()" << endl;
		delete[]str2;
	}
};

int main()
{
	first* ptr = new second("simple", "coplex");
	delete ptr;
	return 0;
}