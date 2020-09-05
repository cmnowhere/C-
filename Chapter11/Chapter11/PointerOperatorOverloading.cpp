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
//		cout << "생성자 호출" << endl;
//	}
//
//	void ShowData()
//	{
//		cout << "num = " << num << endl;
//	}
//
//	Number* operator->() // 포인터 역할을 하는 클래스
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