#include <iostream>
using namespace std;

class PermanentWorker
{
	char name[100];
	int sal;
public:
	PermanentWorker(const char* name, int money) :sal(money)
	{
		strcpy_s(this->name, name);
	}

	int Getpay() const
	{
		return sal;
	}

	void ShowSalInfo() const
	{
		cout << "name: " << name << endl;
		cout << "sla: " << Getpay() << endl << endl;
	}
};

class EmployeeHandler
{
	PermanentWorker* empList[50];
	int empNum;
public:
	EmployeeHandler() :empNum(0) {}


	void AddEmployee(PermanentWorker* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalInfo();
	}

	void ShowTotalSal() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->Getpay();
		cout << "sal sum: " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete[] empList[i];
	}
};
//
//int main()
//{
//	EmployeeHandler handler;
//
//	handler.AddEmployee(new PermanentWorker("Kim", 100));
//	handler.AddEmployee(new PermanentWorker("Lee", 200));
//	handler.AddEmployee(new PermanentWorker("Park", 150));
//
//	handler.ShowAllSalInfo();
//	handler.ShowTotalSal();
//	return 0;
//}