#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		name = new char[strlen(myname) + 1];
		strcpy_s(name, strlen(myname) + 1, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸� : " << name << ", ";
		cout << "���� : " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};
//
//int main()
//{
//	Person parr[3];
//	Person* parr2[3];
//	char namestr[100];
//	char* strptr;
//	int age;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸� : ";
//		cin >> namestr;
//		cout << "���� : ";
//		cin >> age;
//		strptr = new char[strlen(namestr) + 1];
//		strcpy_s(strptr, strlen(namestr) + 1, namestr);
//		parr[i].SetPersonInfo(strptr, age);
//	}
//
//	parr[0].ShowPersonInfo();
//	parr[1].ShowPersonInfo();
//	parr[2].ShowPersonInfo();
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸� : ";
//		cin >> namestr;
//		cout << "���� : ";
//		cin >> age;
//		parr2[i] = new Person(namestr, age);
//	}
//
//	parr2[0]->ShowPersonInfo();
//	parr2[1]->ShowPersonInfo();
//	parr2[2]->ShowPersonInfo();
//
//	
//	return 0;
//}