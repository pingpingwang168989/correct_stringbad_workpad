#pragma once
#include<iostream>
class String
{
private:
	char* str;
	static int strnums;
	static const int cst=10 ;//与枚举等价enum，enum{Cts=10}
	static const int Cinlimit = 80;
public:
	String(const char* s);
	String();
	String(const String& s);
	~String();
	 String& operator=(const String& s);
	 String& operator=(const char* s);
	 char& operator[](int n);
	 const char& operator[](int n)const;
	 friend bool operator<(const String& s1, const String& s2) { return (strcmp(s1.str, s2.str) < 0); }
	 friend bool operator>(const String& s1, const String& s2) { return(strcmp(s1.str, s2.str) > 0); }
	 friend bool operator==(const String& s1, const String& s2) { return (strcmp(s1.str, s2.str) == 0); }
	 friend std::ostream& operator<<(std:: ostream& os, const String& s);
	 friend std::istream& operator>>(std::istream& is, String& s);
	 int& strnum()const;
	 static int& strnum2();
	 static int howmany();
};