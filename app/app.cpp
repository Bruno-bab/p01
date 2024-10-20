#include "app.h"
#include <iostream>
#include <string>
#include <format>
#include <sstream>

namespace vsite::oop::p1 {

/*
* function implementations
*/
	double f1(int a, int b)
	{
		return pow(a, b);
	}

	bool f2(bool a)
	{
		return not a;
	}

	int f3(int a, int b, int c, int d)
	{
		return (a + b + c + d);
	}

	std::string f4(auto a)
	{
		if (typeid(a) == typeid(int)) {
			return "int";
		}
		else if (typeid(a) == typeid(bool)) {
			return "bool";
		}
		return "double";
	}

	bool f5(std::string &a, int b)
	{
		if (b <= 0)
			return false;
		int zadnji_broj = b % 10;
		a = a + std::to_string(zadnji_broj);
		return true;
	}

	void f6(int a, int b, std::stringstream &c)
	{
		using namespace std;
		c << std::to_string(a) + "\n" + std::to_string(b);
	}


} // namespace
