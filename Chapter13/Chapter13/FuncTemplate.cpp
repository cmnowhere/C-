//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//template <typename t>
//t Add(t a, t b)
//{
//	return a > b ? a : b;
//}
//template<>
//char* Add(char* a, char* b)
//{
//	cout << "z" << endl;
//	return strcmp(a, b) > 0 ? a : b;;
//}
//
//template<>
//const char* Add(const char* a,const char* b)
//{
//	cout << "const" << endl;
//	return strcmp(a, b)>0 ? a : b;
//}
//
//int main()
//{
//	cout << Add("simple", "best") << endl;
//
//	return 0;
//}