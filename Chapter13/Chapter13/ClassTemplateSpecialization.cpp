//#include <iostream>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//class Point																// class Point<int>
//{																			// int xpos,ypos;
//	T xpos, ypos;															// Point<int x,int y):xpos(x),ypos(y){cout<<"Class Template"<<endl;
//																			// void ShowObj(){cout<<"This obj size : " << sizeof(int) <<endl;
//public:																		// template<typename T2>										<- 클래스 템플릿과 동일
//	Point(T x, T y) :xpos(x), ypos(y)										// friend ostream& operator<<(ostream& os,const Point<T2>& p);
//	{
//		cout << "Class Template" << endl;									// 
//	}																		//  
//																			//  ostream& operator<<(ostream& os, const Point<int>& p)
//	void ShowObj()															//	cout<< p.xpos<<" ,"<< p.ypos<<endl;
//	{																		//	return os;
//		cout << "This obj size : " << sizeof(T) << endl;
//	}
//																			// 1. Point<int> p1(10,20) 문장의 실행 결과로 클래스 템플릿에서 Point<int> 자료형 템플릿 클래스가 생성.
//	template <typename T>													// 2. cout << p1 << endl 문장의 실행 결과로 함수 템플릿 ostream& operator<<~ 은
//	friend ostream& operator<<(ostream& os,const Point<T>& p);				//    Point<int> 자료형 템플릿 함수를 생성.
//};																			
//
//template <typename T>
//ostream& operator<<(ostream& os, const Point<T>& p)
//{
//	cout<<"hi"<<endl;
//	cout << p.xpos << " ," << p.ypos << endl;
//	return os;
//}
//
//int main()
//{
//	Point<int> p1(10, 20);
//
//	cout << p1;
//
//	return 0;
//}