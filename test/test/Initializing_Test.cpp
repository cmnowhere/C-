//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{
//		cout << "Point 생성자 호출" << endl;
//		cout << "xpos = " << xpos << endl;
//		cout << "ypos = " << ypos << endl<<endl;
//	}
//
//	Point(Point& ref)
//	{
//		cout << "Point 복사생성자 호출" << endl;
//		xpos = ref.xpos;
//		ypos = ref.ypos;
//		cout << "xpos = " << xpos << endl;
//		cout << "ypos = " << ypos << endl<<endl;
//	}
//};
//
//class Rectangle
//{
//	Point upleft;
//	Point rowright;
//
//public:
//	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) :upleft(x1, y1), rowright(x2, y2)
//	{
//		cout << "Rectangle 생성자 호출" << endl;
//	}
//	Rectangle(Rectangle& ref) :upleft(ref.upleft), rowright(ref.rowright)
//	{
//		cout << "Rectangle 복사생성자 호출" << endl;
//	}
//};
//
//int main()
//{
//	Rectangle r1(10, 20, 30, 40);
//
//	cout << "\n------ 복사 생성자 호출 전 ------" << endl << endl;
//	Rectangle r2 = r1;
//
//	return 0;
//}