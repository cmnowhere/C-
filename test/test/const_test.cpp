//#include <iostream>
//
//using namespace std;
//
//class ArrayClass
//{
//private:
//	int* arr;
//	int arrlen;
//
//public:
//	ArrayClass(ArrayClass& arr) = delete;
//	ArrayClass& operator=(ArrayClass& arr) = delete;
//
//	ArrayClass(int n = 30) :arrlen(n)
//	{
//		arr = new int[n];
//	}
//
//	int& operator[](int idx) const
//	{
//		if (idx < 0 || idx >= arrlen)
//			exit(-1);
//
//		return arr[idx];
//	}
//
//	int getlen()const
//	{
//		return arrlen;
//	}
//
//	~ArrayClass()
//	{
//		delete[]arr;
//	}
//
//};
//
//void showdata(const ArrayClass& ref)
//{
//	int lne = ref.getlen();
//	for (int idx = 0; idx < lne; idx++)
//		cout << ref[idx] << endl;
//}
//
//int main()
//{
//	ArrayClass ac;
//	ArrayClass aco(100);
//	
//	ArrayClass ac1;
//
//	ac[0] = 10;
//
//	//ac = ac1; ���Կ��� ����
//
//	//ArrayClass ac2 = ac; ��������� ����
//
//	return 0;
//}