#ifndef SHAPES_H
#define SHAPES_H
#include <iostream>
class Shapes
{
public:
	Shapes(double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0);
	void setRectangle(double, double);
	void setSquare(double);
	void setTrapezium(double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0);
	void setCircle(double);
	double getRectangleArea();
	double getRectanglePeri();
	double getSquareArea();
	double getSquarePeri();
	double getTrapeziumArea();
	double getTrapeziumPeri();
	double getCircleArea();
	double getCirclePeri();
private:
	double length;
	double breadth;
	double radius;
	double area;
	double perimeter;
	double a;
	double b;
	double c;
	double d;
	double height;
};
#endif