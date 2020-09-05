//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int n1, n2;
//public:
//	Point(int num1, int num2) :n1(num1), n2(num2) {}
//
//	friend ostream& operator<<(ostream& obj1,Point& obj2);
//
//	void ShowData()
//	{
//		cout << '[' << n1 << ',' << n2 << ']';
//	}
//};
//
//ostream& operator<<(ostream& obj1, Point& obj2)
//{
//	obj2.ShowData();
//	return obj1;
//}
//
//int main()
//{
//	Point pos(3, 4);
//	cout << pos << endl; // [3,4] 를 출력 하는 Point 클레스 정의. cout.operator<<(pos)
//
//	return 0;
//}