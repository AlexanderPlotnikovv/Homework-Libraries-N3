#include<iostream>
#include "Triangle.h"


void Triangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
Triangle::Triangle() : Triangle(10, 20, 30, 50, 60, 70, "Triangle") {}