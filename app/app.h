#pragma once

#include <string>
#include <iostream>

namespace vsite::oop::p1 
{
/*  
* function declarations
*/
	double f1(int a, int b);

	bool f2(bool a);

	int f3(int a = 1, int b = 2, int c = 3, int d = 4);

	std::string f4(auto a);

	bool f5(std::string &a, int b);

	void f6(int a, int b, std::stringstream &c);
}
