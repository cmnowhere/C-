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
//	int& operator[](int n)  // ��ȯ�� ���������� �ϴ� ��� const ������ �ǹ̰� ���� ���� ����.
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
//void ShowData(const Array& ref) //ref�� �̿��� ���� ������ ������� �ʴ´�.
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