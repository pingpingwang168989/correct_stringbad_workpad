#include"correct_stringbad.h"
#include<iostream>
extern const double Rad_dgree;
String test_equal(const String &s);
int main()
{
	String s("nihao.");
	String s1(test_equal(s));
	String s2;
	s2 = test_equal(s1);
	std::cout << Rad_dgree << std::endl;
	s.strnum() = 10;
	std::cout << s.strnum()<<std::endl;
	String::strnum2()=22;
	std::cout << String::strnum2() << std::endl;
	std::cout << "str[0]:" << s[0] << std::endl;
	int ch = s[2];
	std::cout << ch <<":"<<char(ch) << std::endl;
	return 0;
	
}

String test_equal(const String &s)
{
	std::cout << "in function test_equal." << std::endl;
	return s;

}