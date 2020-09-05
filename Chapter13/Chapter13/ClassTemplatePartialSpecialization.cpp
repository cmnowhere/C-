//#include <iostream>
//
//using namespace std;
//
//template <typename T1,typename T2> // 클래스 템플릿
//class Simple
//{
//public:
//	void Whoareyou()
//	{
//		cout << "size of T1: " << sizeof(T1) << endl;
//		cout << "size of T2: " << sizeof(T2) << endl;
//		cout << "<typename T1, typename T2>" << endl;
//	}
//};
//
//
//template<>
//class Simple<int, double> // 특수화가 진행되서 클래스 템플릿이 아닌 템플릿 클래스가 됨. (클래스 형태를 띄움)
//{
//public:
//	void Whoareyou()
//	{
//		cout << "size of int: " << sizeof(int) << endl;
//		cout << "size of double : " << sizeof(double) << endl;
//		cout << "<int, double>" << endl;
//	}
//};
//
//
//template <typename T1>
//class Simple<T1, double> // 부분 특수화가 되었지만 템플릿 클래스가 아님, T1을 결정해줘야 하므로 아직 클래스 템플릿인 상태.
//{
//public:
//	void Whoareyou()
//	{
//		cout << "size of T1: " << sizeof(T1) << endl;
//		cout << "size of T2: " << sizeof(double) << endl;
//		cout << "<typename T1, double>" << endl;
//	}
//};
//
//int main()
//{
//	Simple<char, double> obj1;
//
//	Simple<int, double> obj2;
//
//	obj1.Whoareyou();
//	obj2.Whoareyou();
//	return 0;
//}