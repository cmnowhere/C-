#ifndef __String_h__
#define __String_h__

#include <iostream>

using namespace std;

class String
{
private:
	char* str;
	size_t len;
public:
	String();
	String(const char* s);
	String(const String& ref);
	String operator+(String& ref);
	String& operator=(const String& ref);
	int operator==(char ref[]);
	~String();
	friend ostream& operator<<(ostream& ref1, const String& ref2);
	friend istream& operator>>(istream& ref1, String& ref2);
};

#endif