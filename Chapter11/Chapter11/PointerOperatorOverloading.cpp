//#include <iostream>
//
//using namespace std;
//
//class Number
//{
//	int num;
//public:
//	Number(int n = 0) :num(n)
//	{
//		cout << "������ ȣ��" << endl;
//	}
//
//	void ShowData()
//	{
//		cout << "num = " << num << endl;
//	}
//
//	Number* operator->() // ������ ������ �ϴ� Ŭ����
//	{
//		return this;
//	}
//
//	Number& operator*()
//	{
//		return *this;
//	}
//};
//
//int main()
//{
//	Number n(10);
//	n.ShowData();
//
//	*n = 20; 
//	n.ShowData();
//
//	return 0;
//}