#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
	char* str;
	int len;
public:
	String() :len(10)
	{
		memset(str, 0, sizeof(str));
	}

	String(const char* s)
	{
		len = strlen(s) + 1;
		str = new char[len];
		strcpy_s(str, len, s);
	}
	
	String(const String& ref)
	{
		len = ref.len;
		str = new char[len];
		strcpy_s(str, len, ref.str);
	}

	String operator+(String& ref)
	{
		int sumlen = len + ref.len - 1;
		char* tmp = new char[sumlen];
		
		strcpy_s(tmp, sumlen, str);
		strcat_s(tmp, sumlen, ref.str);
		
		String temp(tmp);
		delete[]tmp;
		
		return temp;
	}

	String& operator=(const String& ref)
	{
		if (str != NULL)
			delete[]str;

		str = new char[ref.len];
		strcpy_s(str, ref.len, ref.str);

		return *this;
	}

	~String()
	{
		delete[]str;
	}

	friend ostream& operator<<(ostream& ref1, String& ref2);
};

ostream& operator<<(ostream& ref1, String& ref2)
{
	ref1 << ref2.str;
	return ref1;
}
