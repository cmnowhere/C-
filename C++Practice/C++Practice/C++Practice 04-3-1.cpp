#include <iostream>

using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x, int y) :xpos(x), ypos(y) {}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
	Point p;
	int radius;
public:
	Circle(int x,int y,int r) : radius(r),p(x,y) {}
	void ShowCircleInfo() const
	{
		cout << "Radius : " << radius << endl;
		p.ShowPointInfo();
	}
};

class Ring
{
	Circle c1, c2;
public:
	Ring(int x1, int y1, int r1, int x2, int y2, int r2) : c1(x1,y1,r1), c2(x2, y2, r2) {}

	void ShowRingInfo() const
	{
		cout << "Inner Circle . . ." << endl;
		c1.ShowCircleInfo();
		cout << "Outter Circle . . ." << endl;
		c2.ShowCircleInfo();
	}
	
};

/*int main()
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}*/


