#pragma warning(disable:4996)
#include<cstring>
#include"correct_stringbad.h"
#include<iostream>
int String::strnums = 0;
extern const double Rad_dgree = 45.5;
String::String(const char* s)
{
	int len=std::strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	strnums++;
	std::cout << strnums << ":\"" << str << "\" object created.\n";
	
}
String::String()

{
	str = new char[1];
	str[0] = '\0';
	strnums++;
	std::cout << strnums << ":\"" << str << "\" kong object created.\n";
}
String::String(const String& s)
{
	int len = strlen(s.str);
	str = new char[len + 1];
	strcpy(str, s.str);
	strnums++;
	std::cout << "copy construct invoked."<<strnums<<":\""<<str<<"\" object created.\n";
}
String::~String()
{
	std::cout << "deleting \"" << str << " \" object.\n";
	strnums--;
	std::cout << "left " << strnums << " objects.\n";
	delete[]str;
}
 String& String::operator=(const String& s)
{
	if (this == &s)
		return *this;
	int len = strlen(s.str);
	delete[]str;
	str = new char[len + 1];
	strcpy(str, s.str);
	std::cout << "fuzhi construct invoked.object:\"" << str << "\".\n";
	return *this;
}

 String& String::operator=(const char* s)
 {
	 delete []str;
	 int len = strlen(s);
	 str = new char[len + 1];
	 strcpy(str, s);
	 return *this;
 }
 char& String::operator[](int n)
 {
	 std::cout << "in str[]" << std::endl;
	 return str[n];
 }

 const char& String::operator[](int n)const
 {
	 std::cout << "in const str[]" << std::endl;
	 return str[n];
 }
 
 std::ostream& operator<<(std::ostream& os, const String& s)
 {
	 os << s.str;
	 return os;
 }
 std::istream& operator>>(std::istream& is, String& s)
 {
	 char temp[String::Cinlimit];
	 std::cin.get(temp, String::Cinlimit);
	 if(is)
		 s = temp;
	 while (is && is.get() != '\n')
		 continue;
	 return is;
 }
 int& String::strnum2()
 {
	 return strnums;
 }
 int& String::strnum()const
 {
	 return strnums;
 }

 int String::howmany()
 {
	 return strnums;
 }





