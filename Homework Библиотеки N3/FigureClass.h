#pragma once

class Figure {
protected:
	std::string Name;
	Figure(std::string Name);
public:
	Figure();
	std::string coutName();
	virtual void print_info() {};
};

class Triangle : public Figure {
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
	Triangle(int a, int b, int c, int A, int B, int C, std::string Name);
public:
	Triangle();
	void print_info() override;
};


class Quadrangle : public Figure {
protected:
	int a1;
	int b1;
	int c1;
	int d1;
	int A1;
	int B1;
	int C1;
	int D1;
	Quadrangle(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1, std::string Name);
public:
	Quadrangle();
	void print_info() override;
};

class RectangularTriangle : public Triangle {
public:
	RectangularTriangle();
	void print_info() override;
};

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle();
	void print_info() override;
};

class EqualateralTriangle : public Triangle {
public:
	EqualateralTriangle();
	void print_info() override;
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram();
	void print_info() override;
};

class Rectangle : public Quadrangle {
public:
	Rectangle();
	void print_info() override;
};

class Rhomb : public Quadrangle {
public:
	Rhomb();
	void print_info() override;
};

class Square : public Quadrangle {
public:
	Square();
	void print_info() override;
};