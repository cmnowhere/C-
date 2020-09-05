#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;

String::String() :len(10)
{
	str = NULL;
}

String::String(const char* s)
{
	len = strlen(s) + 1;
	str = new char[len];
	strcpy_s(str, len, s);
}

String::String(const String& ref)
{
	len = ref.len;
	str = new char[len];
	strcpy_s(str, len, ref.str);
}

String String::operator+(String& ref)
{
	size_t sumlen = len + ref.len - 1;
	char* tmp = new char[sumlen];

	strcpy_s(tmp, sumlen, str);
	strcat_s(tmp, sumlen, ref.str);

	String temp(tmp);
	delete[]tmp;

	return temp;
}

String& String::operator=(const String& ref)
{
	if (str != NULL)
		delete[]str;

	str = new char[ref.len];
	strcpy_s(str, ref.len, ref.str);

	return *this;
}

String::~String()
{
	delete[]str;
}

ostream& operator<<(ostream& ref1, String& ref2)
{
	ref1 << ref2.str;
	return ref1;
}
istream& operator>>(istream& ref1, String& ref2)
{
	char str[100];
	ref1 >> str;
	ref2 = String(str);
	return ref1;
}
