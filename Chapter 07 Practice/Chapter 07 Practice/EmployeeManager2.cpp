#include <iostream>

using namespace std;

namespace RISK_LEVEL
{
	enum { RISK_A=1, RISK_B, RISK_C };
}

class Employee
{
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy_s(this->name, name);
	}

	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}

	virtual int GetPay() const = 0;

	virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker :public Employee
{
	int salary;
public:
	PermanentWorker(const char* name, int money) :Employee(name), salary(money) {}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker :public Employee
{
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char* name, int pay) :Employee(name), workTime(0), payPerHour(pay) {}

	void AddWorkTime(int time)
	{
		workTime += time;
	}

	int GetPay() const
	{
		return workTime * payPerHour;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char* name, int money, double ratio) :PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}

	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}

	virtual void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class ForeignSalesWorker : public SalesWorker
{
	int n;
public:
	ForeignSalesWorker(const char* name, int money, double ratio,int n) :SalesWorker(name, money, ratio), n(n) {}

	int GetPay() const
	{
		switch (n)
		{
		case 1:
			return (int)(SalesWorker::GetPay() * 1.3);
		case 2:
			return (int)(SalesWorker::GetPay() * 1.2);
		case 3:
			return (int)(SalesWorker::GetPay() * 1.1);
		}
		return 0;
	}

	virtual void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << SalesWorker::GetPay() << endl;
		cout << "risk pay : " << ForeignSalesWorker::GetPay() - SalesWorker::GetPay() << endl;
		cout << "sum : " << ForeignSalesWorker::GetPay()<<endl;
	}
};
class EmployeeHandler
{
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() :empNum(0) {}


	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}

	void ShowTotalSal() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "sal sum: " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete[] empList[i];
	}
};

//int main()
//{
//	EmployeeHandler handler;
//	ForeignSalesWorker* fs1 = new ForeignSalesWorker("kim", 1000, 0.1, RISK_LEVEL::RISK_A);
//	fs1->AddSalesResult(7000);
//	handler.AddEmployee(fs1);
//	handler.ShowSalaryInfo();
//	return 0;
//}