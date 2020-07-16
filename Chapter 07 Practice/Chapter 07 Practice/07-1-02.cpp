#include <iostream>
using namespace std;

class MyFriendInfo
{
	char* name;
	int age;
public:
	MyFriendInfo(const char* name, int age) :age(age)
	{
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}
	void ShowMyFriendInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~MyFriendInfo()
	{
		delete[]name;
	}
};

class MyFriendDetailInfo :public MyFriendInfo
{
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* name, int age, const char* addr,const char* phone) :MyFriendInfo(name, age)
	{
		this->addr = new char[strlen(addr) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy_s(this->addr, strlen(addr) + 1, addr);
		strcpy_s(this->phone, strlen(phone) + 1, phone);
	}

	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소 : " << addr << endl;
		cout << "전화: " << phone << endl;
	}
	~MyFriendDetailInfo()
	{
		delete[]addr;
		delete[]phone;
	}
};

int main()
{
	MyFriendDetailInfo p1("park", 20, "seoul", "010-1234-1234");
	p1.ShowMyFriendDetailInfo();
	printf("hi"); printf("hi"); printf("hi"); printf("hi\n"); printf("hi\n"); printf("hi\n");
	return 0;
}