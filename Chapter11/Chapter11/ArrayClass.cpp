//#include <iostream>
//
//using namespace std;
//
//class Array
//{
//private:
//	int *size;
//	int len;
//	Array(const Array& ar) {}
//	Array& operator=(const Array& ar) {}
//
//public:
//	Array(int n) :len(n)
//	{
//		size = new int[len];
//	}
//
//	int& operator[](int n)  // 반환을 참조형으로 하는 경우 const 선언은 의미가 없을 수도 있음.
//	{
//		if (n<0 || n>=len)
//		{
//			cout << "Index  out of bound" << endl;
//			exit(-1);
//		}
//		
//		cout << "size["<<n<<"]="<<n+11<< endl;
//		return size[n];
//	}
//
//	int operator[](int n) const
//	{
//		if (n < 0 || n >= len)
//		{
//			cout << "Index  out of bound" << endl;
//			exit(-1);
//		}
//
//		return size[n];a
//	}
//	int arrlen() const
//	{
//		return len;
//	}
//
//	~Array()
//	{
//		delete[]size;
//	}
//};
//
//void ShowData(const Array& ref) //ref를 이용해 값의 변경을 허용하지 않는다.
//{
//	int len = ref.arrlen();
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << ref[i] << endl; 
//	}
//}
//
//int main()
//{
//	Array arr(10);
//	
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i+11;
//	}
//	
//	ShowData(arr);
//
//	return 0;
//}