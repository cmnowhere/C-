#include <iostream>

using namespace std;

class Person
{
	int age;
	char name[50];

public:
	Person(int myage, const char* myname) :age(myage)
	{
		strcpy_s(name, myname);
	}

	void Whatyouname() const
	{
		cout << "My name is " << name << endl;
	}

	void Howold() const
	{
		cout << "How old are you : " << age << endl;
	}
};

class UnivStudent :public Person  // Person Ŭ������ ����� �ǹ�
{
	char major[50];
public:
	UnivStudent(const char* myname, int myage,const char* mymajor) :Person(myage, myname)
	{
		strcpy_s(major, mymajor);
	}

	void Whoareyou() const
	{
		Whatyouname();
		Howold();
		cout << "My major is " << major << endl << endl;
	}
};
//
//int main()
//{
//	UnivStudent st1("park", 20, "Computer");
//	st1.Whoareyou();
//
//	return 0;
//}
