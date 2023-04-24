#include <iostream>

#include "FigureClass.h"

//void Figure::print_info() {}
std::string Figure::coutName () { return Name; }
Figure::Figure(std::string Name) : Name(Name) {}

void Triangle::print_info () {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
Triangle::Triangle() : Triangle(10, 20, 30, 50, 60, 70, "Triangle") {}

void Quadrangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Quadrangle::Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "Quadrangle") {}

void RectangularTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
RectangularTriangle::RectangularTriangle() : Triangle(10, 20, 30, 50, 60, 90, "Rectangular triangle") {}

void IsoscelesTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
IsoscelesTriangle::IsoscelesTriangle() : Triangle(10, 20, 10, 50, 60, 50, "Isosceles triangle") {}

void EqualateralTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
EqualateralTriangle::EqualateralTriangle() : Triangle(30, 30, 30, 60, 60, 60, "Equalateral triangle") {}

void Parallelogram::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Parallelogram::Parallelogram() : Quadrangle(20, 30, 20, 30, 30, 40, 30, 40, "Parallelogram") {}

void Rectangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Rectangle::Rectangle() : Quadrangle(10, 20, 10, 20, 90, 90, 90, 90, "Rectangle") {}

void Rhomb::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}

Rhomb::Rhomb() : Quadrangle(30, 30, 30, 30, 30, 40, 30, 40, "Rhomb") {}

void Square::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Square::Square() : Quadrangle(20, 20, 20, 20, 90, 90, 90, 90, "Square") {}