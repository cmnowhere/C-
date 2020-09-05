//#include <iostream>
//
//using namespace std;
//
//template <typename T>
//
//class Point
//{
//	T xpos, ypos;
//public:
////	Point(T x = 0, T y = 0);
//
//	void ShowPosition() const;
//};
//
//template<typename T>
//Point<T>::Point(T x = 0, T y = 0) :xpos(x), ypos(y) {}
//
//template<typename T>
//void Point<T>::ShowPosition() const
//{
//	cout << '[' << xpos << ", " << ypos << ']' << endl;
//}
//
//int main()
//{
//	Point<int> pos1(3, 4);
//
//	Point<double> pos2(3.2, 5.3);
//
//	pos1.ShowPosition();
//
//	pos2.ShowPosition();
//
//	Point<char> pos3('X', 'Y');
//
//	pos3.ShowPosition();
//
//	return 0;
//}