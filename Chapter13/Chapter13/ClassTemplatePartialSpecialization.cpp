//#include <iostream>
//
//using namespace std;
//
//template <typename T1,typename T2> // Ŭ���� ���ø�
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
//class Simple<int, double> // Ư��ȭ�� ����Ǽ� Ŭ���� ���ø��� �ƴ� ���ø� Ŭ������ ��. (Ŭ���� ���¸� ���)
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
//class Simple<T1, double> // �κ� Ư��ȭ�� �Ǿ����� ���ø� Ŭ������ �ƴ�, T1�� ��������� �ϹǷ� ���� Ŭ���� ���ø��� ����.
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