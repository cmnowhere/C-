//#include <iostream>
//
//using namespace std;
//
//class point
//{
//private:
//	int xpos, ypos;
//
//public:
//	point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{
//		cout << "��ä �����Ϸ�" << endl;
//	}
//
//	void* operator new(size_t s)
//	{
//		cout << "�����Ҵ�" << endl;
//		void* adress = new char[s];
//		return adress;
//	}
//
//	friend ostream& operator<<(ostream& cout, const point& ref);
//};
//
//ostream& operator<<(ostream& cout, const point& ref)
//{
//	cout << ref.xpos << ',' << ref.ypos << endl;
//	return cout;
//}
//
//int main()
//{
//	point* ptr = new point(3, 4);
//
//
//
//	return 0;
//}