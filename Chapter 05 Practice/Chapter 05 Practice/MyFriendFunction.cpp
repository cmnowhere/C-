#include <iostream>
using namespace std;

class Point;

class PointOP
{
private:
	int opcnt;
public:
	PointOP() :opcnt(0) {}

	Point PointAdd(const Point& a, const Point& b);
	Point PointSub(const Point& a, const Point& b);
	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos)
	{}
	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&);
};

Point PointOP::PointAdd(const Point& a, const Point& b)
{
	opcnt++;
	return Point(a.x + b.x, a.y + b.y);
}

Point PointOP::PointSub(const Point& a, const Point& b)
{
	opcnt++;
	return Point(a.x - b.x, a.y - b.y);
}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}

//int main()
//{
//	Point pos1(1, 2);
//	Point pos2(2, 4);
//	PointOP op;
//
//	ShowPointPos(op.PointAdd(pos1, pos2));
//	ShowPointPos(op.PointSub(pos1, pos2));
//	return 0;
//}
//
