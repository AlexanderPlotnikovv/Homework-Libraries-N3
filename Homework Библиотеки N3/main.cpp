#include <iostream>

#include "FigureClass.h"

int main()
{
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;
	RectangularTriangle rectangularTriangle;
	IsoscelesTriangle isoscelesTriangle;
	EqualateralTriangle equalateralTriangle;
	Parallelogram parallelogram;
	Rectangle rectangle;
	Rhomb rhomb;
	Square square;
	triangle.print_info();
	quadrangle.print_info();
	rectangularTriangle.print_info();
	isoscelesTriangle.print_info();
	equalateralTriangle.print_info();
	parallelogram.print_info();
	rectangle.print_info();
	rhomb.print_info();
	square.print_info();
	return 0;
}