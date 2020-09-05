//#include <iostream>
//
//using namespace std;
//
//class Book
//{
//	char* title;
//	char* isbn;
//	int price;
//public:
//	Book(const char* t, const char* i, int p) :price(p)
//	{
//		title = new char[strlen(t) + 1];
//		isbn = new char[strlen(i) + 1];
//
//		strcpy_s(title, strlen(t) + 1, t);
//		strcpy_s(isbn, strlen(i) + 1, i);
//
//	}
//
//	Book(const Book& obj) :price(obj.price) //Book x1=x2; x1(x2)
//	{
//		cout << "?" << endl;
//		title = new char[strlen(obj.title)+1];
//		isbn = new char[strlen(obj.isbn)+1];
//		strcpy_s(title, strlen(obj.title) + 1, obj.title);
//		strcpy_s(isbn, strlen(obj.isbn) + 1, obj.isbn);
//	}
//
//	Book& operator=(const Book& obj)
//	{
//		delete[] title;
//		delete[] isbn;
//
//		title = new char[strlen(obj.title) + 1];
//		isbn = new char[strlen(obj.isbn) + 1];
//		strcpy_s(title, strlen(obj.title) + 1, obj.title);
//		strcpy_s(isbn, strlen(obj.isbn) + 1, obj.isbn);
//		return *this;
//	}
//
//	void ShowBookInfo()
//	{
//		cout << "제목 : " << title << endl;
//		cout << "ISBN: " << isbn << endl;
//		cout << "가격 : " << price << endl;
//	}
//};
//
//class EBook :public Book
//{
//	char* DRMKey;
//public:
//
//	EBook(const char* c, const char* i, int p, const char* d) :Book(c, i, p)
//	{
//		DRMKey = new char[strlen(d) + 1];
//		strcpy_s(DRMKey, strlen(d) + 1, d);
//	}
//
//	EBook(const EBook& eb) :Book(eb)
//	{
//		DRMKey = new char[strlen(eb.DRMKey) + 1];
//		strcpy_s(DRMKey,strlen(eb.DRMKey)+1,eb.DRMKey);
//	}
//
//	EBook& operator=(const EBook& eb)
//	{
//		delete[] DRMKey;
//		Book::operator=(eb);
//		DRMKey = new char[strlen(eb.DRMKey) + 1];
//		strcpy_s(DRMKey, strlen(eb.DRMKey) + 1, eb.DRMKey);
//		return *this;
//	}
//	void ShowEBookInfo()
//	{
//		ShowBookInfo();
//		cout << "인증키 : " << DRMKey << endl;
//	}
//};
//
//int main()
//{
//	Book book1("좋은 C++", "555-12345-890-0", 20000);
//	
//	EBook ebook1("C++", "555-12345-890-1", 10000, "Ab12CD34");
//
//	Book book2 = ebook1;
//
//	return 0;
//}