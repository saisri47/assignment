#include <iostream>
#include "Shapes.h"
#define pi 3.14
using namespace std;
Shapes::Shapes(double l, double b, double r, double s1, double s2, double s3, double s4, double h)
{
	length = l;
	breadth = b;
	radius = r;
}
void Shapes::setRectangle(double l, double b)
{
	length = l;
	breadth = b;
}
void Shapes::setSquare(double l)
{
	length = l;
}
void Shapes::setTrapezium(double s1, double s2, double s3, double s4, double h)
{
	a = s1;
	b = s2;
	c = s3;
	d = s4;
	height = h;
}
void Shapes::setCircle(double r)
{
	radius = r;
}
double Shapes::getRectangleArea()
{
	area = length * breadth;
	return area;
}
double Shapes::getRectanglePeri()
{
	perimeter = 2 * (length + breadth);
	return perimeter;
}
double Shapes::getSquareArea()
{
	area = length * length;
	return area;
}
double Shapes::getSquarePeri()
{
	perimeter = 4 * length;
	return perimeter;
}
double Shapes::getTrapeziumArea()
{
	area = 0.5 * (a + b) * height;
	return area;
}
double Shapes::getTrapeziumPeri()
{
	perimeter = a + b + c + d;
	return perimeter;
}
double Shapes::getCircleArea()
{
	area = pi * radius * radius;
	return area;
}
double Shapes::getCirclePeri()
{
	perimeter = 2 * pi * radius;
	return perimeter;
}