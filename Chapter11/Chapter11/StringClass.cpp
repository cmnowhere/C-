//#include <iostream>
//
//using namespace std;
//
//class String
//{
//private:
//	int len;
//	char* str;
//public:
//	String()
//	{
//		len = 0;
//		str = NULL;
//	}
//	String(const char* s)
//	{
//		cout << "생성자 호출" << endl;
//		len = strlen(s) + 1;
//		str = new char[strlen(s) + 1];
//
//		strcpy_s(str, strlen(s) + 1, s);	
//	}
//
//	String(String& copy)
//	{
//		cout << "복사생성자 호출" << endl;
//		len = copy.len;
//		str = new char[len];
//		strcpy_s(str, len, copy.str);
//	}
//	~String()
//	{
//		cout << "소멸자 호출" << endl;
//		if (str != NULL)
//			delete[]str;
//	}
//
//	String& operator=(String& copy)
//	{
//		cout << "대입연산자 호출" << endl;
//
//		if(str!=NULL)
//			delete[]str;
//
//		len = copy.len;
//		str = new char[len];
//		strcpy_s(str, len, copy.str);
//		return *this;
//	}
//
//	friend ostream& operator<<(ostream& os, String& s);
//};
//
//ostream& operator<<(ostream& os,String& s)
//{
//	os << s.str;
//	return os;
//}
//
//int main()
//{
//	String str1 = "park";
//
//	String str2 = "kim";
//
//	str1 = str2;
//
//	String str3 = str1;
//
//	return 0;
//}
//
