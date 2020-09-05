//#include <iostream>
//using namespace std;
//
//class Point 
//{
//	int xpos, ypos;
//public :
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{}
//	void ShowPosition()const;
//
//	friend Point operator+(const Point& pos1, const Point& pos2);
//
//};
//
//void Point::ShowPosition() const
//{
//	cout << '[' << xpos << ']' << ", " << '[' << ypos << ']' << endl;
//}
//
//Point operator+(const Point& pos1, const Point& pos2)
//{
//	Point pos(pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos);
//	return pos;
//}
//
//int main()
//{
//	Point p1(3, 5);
//	Point p2(7, 5);
//	Point p3 = p1 + p2;
//	p3.ShowPosition();
//
//	return 0;
//}