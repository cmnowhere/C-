#include <iostream>
#include <cstring>

using namespace std;

class Computer
{
	char owner[50];
public:
	Computer(const char* name)
	{
		strcpy_s(owner, name);
	}

	void Calculate()
	{
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class NotebookComp :public Computer
{
	int Battery;
public:
	NotebookComp(const char* name, int initChag)
		:Computer(name), Battery(initChag) {}

	void Charginh()
	{
		Battery += 5;
	}

	void UseBattery()
	{
		Battery -= 1;
	}

	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전 필요" << endl;
			return;
		}
		cout << "이동하면서 ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo()
	{
		return Battery;
	}
};

class TabletNotebook :public NotebookComp
{
	char regstPenModel[50];
public:
	TabletNotebook(const char* name, int initChag, const char* pen) :NotebookComp(name, initChag)
	{
		strcpy_s(regstPenModel, pen);
	}

	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}

		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "등록된 팬이 아닙니다.";
			return;
		}

		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}
};

//int main()
//{
//	NotebookComp nc("박창민", 10);
//	TabletNotebook tn("정수영", 0, "ISE-241-242");
//	nc.MovingCal();
//	tn.Write("ISE-241-242");
//	return 0;
//}