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
//	s << 'a' << test::endl; // s.operator<<(a) -> a 출력 후, Stream 참조객체 리턴 -> (Stream 참조객체)<<endl -> (Stream 참조객체).operator<<(endl) -> return 을 통해 endl(s)가 되어 이는 함수 본문을 통해 s.operator<<(char n) 이 실행된다.
//
//	//s << 'a' << endl(s); // 함수호출이 먼저이뤄져서 s 반납 s << 'a'<< s 로 됨 -> s << 'a' 는 a를 출력 후 s를 반납함. 이후 s << s 로 되는데 이는 객체자신을 반납하고 아무역할을 하지 않음 
//	return 0;
//}
