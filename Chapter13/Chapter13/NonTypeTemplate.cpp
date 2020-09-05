//#include <iostream>
//
//using namespace std;
//
//template<typename T>
//class Test
//{
//	int num;
//
//public:
//	Test(int n) :num(n) {}
//
//	template<typename T>
//	friend void showtest(Test<T>& ref);
//};
//
//template <typename T>
//void showtest(Test<T>& ref)
//{
//	cout << "?" << endl;
//	cout << ref.num << endl;
//}
//
//int main()
//{
//	Test<int> t1(10);
//
//	showtest(t1);
//
//	return 0;
//}