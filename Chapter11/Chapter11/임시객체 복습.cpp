//#include <iostream>
//
//using namespace std;
//
//
//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{
//		cout << "��ü ���� : " << this << endl << endl;
//	}
//
//	Point(const Point& cpoy) :xpos(cpoy.xpos), ypos(cpoy.ypos)
//	{
//		cout << "��������� ȣ�� : " << this << endl << endl;
//	}
//
//	void SetPos(int x, int y)
//	{
//		xpos = x;
//		ypos = y;
//	}
//	friend ostream& operator<<(ostream& obj1, Point obj2);
//
//
//	~Point()
//	{
//		cout << "��ü �Ҹ� : " << this << endl << endl;
//	}
//};
//
//ostream& operator<<(ostream& obj1, Point obj2)
//{
//	cout << "[" << obj2.xpos << "," << obj2.ypos << "]" << endl << endl;
//	return obj1;
//}
//
//Point test(Point p1) // �Ű����� p1 �ӽð�ü ���� 006FFD1C
//{
//	p1.SetPos(3, 3);
//	return p1;  // ��ȯ �ϸ鼭 �ӽð�ü ���� 006FFE14
//}
//
//int main()
//{
//	Point p1(3, 1); // ��ü ���� 006FFE24
//
//	cout << "----------------" << endl << endl;
//
//	cout << "xpos, ypos = " << p1 << endl;
//
//	cout << "----------------" << endl << endl;
//	Point p2 = test(p1); // ��ȯ �Ϸ� �� �Ű����� p1 �ӽð�ü �Ҹ� 006FFD1C
//
//	cout << "----------------" << endl << endl;
//
//	cout << "xpos, ypos = " << p1 << endl; // ��ȯ�� �ӽð�ü�� p2�� ������ 006FFE14
//
//	printf("\n");
//
//	return 0;  // ���α׷� �����ϸ鼭 006FFE14, 006FFE24 �Ҹ�
//}