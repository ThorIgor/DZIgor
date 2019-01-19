#include<iostream>

using namespace std;

class Shape abstract
{
public:
	virtual void print() = 0;
	virtual void printShapeName() = 0;
	virtual double area()
	{
		return 0;
	}
	virtual double volume()
	{
		return 0;
	}
};

class Point : public Shape
{
public:
	virtual void print() override
	{
		cout << "." << endl;
	}
	virtual void printShapeName() override
	{
		cout << "Point";
	}
};

class Circle : public Point
{
	double R;
public:
	Circle(const double &r =1) : R(r)
	{}
	void print() override
	{
		cout << "o" << endl;
	}
	void printShapeName() override
	{
		cout << "Circle";
	}
	double area() override
	{
		return 3.14*R*R;
	}
};

class Cylinder : public Circle
{
	double R, H;
public:
	Cylinder(const double &r = 1, const double &h =1) : R(r), H(h)
	{}
	void print() override
	{
		cout << "o=)" << endl;
	}
	void printShapeName() override
	{
		cout << "Cylinder";
	}
	double area() override
	{
		return 2*(3.14*R*R) + 2*3.14*R*H;
	}
	double volume() override
	{
		return 3.14*R*R*H;
	}
};