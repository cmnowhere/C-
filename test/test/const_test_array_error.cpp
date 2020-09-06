//#include <iostream>
//
//using namespace std;
//
//class ArrayClass
//{
//private:
//	int *arr;
//	int len;
//public:
//	ArrayClass(ArrayClass& arr) = delete;
//	ArrayClass& operator=(ArrayClass& arr) = delete;
//
//	ArrayClass(int n = 30) :len(n) 
//	{
//		arr = new int[n];
//	}
//
//	int& operator[](int idx)
//	{
//		if (idx < 0 || idx >= len)
//			exit(-1);
//
//		return arr[idx];
//	}
//	
//	int operator[](int idx) const
//	{
//		if (idx < 0 || idx >= len)
//			exit(-1);
//
//		return arr[idx];
//	}
//
//	//int getlen() const
//	//{
//	//	return len;
//	//}
//
//	//int& getlen() const 
//	//{
//	//	len = 10;		    // const 함수는 함수 내에서 값의 변경을 허용하지 않음.
//	//	//return arr[0];  // 이는 엄밀히 말하면 객체의 멤버가 아닌 객체의 멤버가 가리키는 대상이므로 반환할 수 있음
//
//	//	return len;		   // const 함수는 함수 내에서 값의 변경을 허용하지 않음. 이를 기반으로 객체를 참조형으로 반환할 수 없음
//	//}
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
//	int len = ref.getlen();
//	for (int idx = 0; idx < len; idx++)
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
//	//ac = ac1; 대입연산 금지
//
//	//ArrayClass ac2 = ac; 복사생성자 금지
//
//	return 0;
//}