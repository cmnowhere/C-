//#include <iostream>
//
//namespace test
//{
//class Stream
//{
//public:
//	Stream& operator<<(int n)
//	{
//		printf("%d",n);
//		return *this;
//	}
//
//	Stream& operator<<(char n)
//	{
//		printf("%c",n);
//		return *this;
//	}
//	Stream& operator<<(Stream& (*ptr)(Stream& obj))
//	{
//
//		return ptr(*this);
//	}
//
//	/*Stream& operator<<(Stream& obj)
//	{
//		return *this;
//	}*/
//};
//
//Stream& endl(Stream& obj)
//{
//	obj << '\n';
//	fflush(stdout);
//	return obj;
//}
//
//}
//int main()
//{
//	test::Stream s;
//	
//	s << 'a' << test::endl; // s.operator<<(a) -> a ��� ��, Stream ������ü ���� -> (Stream ������ü)<<endl -> (Stream ������ü).operator<<(endl) -> return �� ���� endl(s)�� �Ǿ� �̴� �Լ� ������ ���� s.operator<<(char n) �� ����ȴ�.
//
//	//s << 'a' << endl(s); // �Լ�ȣ���� �����̷����� s �ݳ� s << 'a'<< s �� �� -> s << 'a' �� a�� ��� �� s�� �ݳ���. ���� s << s �� �Ǵµ� �̴� ��ü�ڽ��� �ݳ��ϰ� �ƹ������� ���� ���� 
//	return 0;
//}
