#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Shapes.h"
using namespace std;
int main()
{
	double length, breadth, radius, a, b, c, d, height;
	ofstream outShapeFile{ "Shapes.txt",ios::out };
	if (!outShapeFile)
	{
		cerr << "File cannot be opened" << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Enter Length,Breadth,Radius,a,b,c,d,height: " << endl;
	while (cin >> length >> breadth >> radius >> a >> b >> c >> d >> height)
	{
		outShapeFile << length << ' ' << breadth << ' ' << radius << ' ' << a << ' ' << b << ' ' << c << ' ' << d << ' ' << height<<endl;
		cout << "?";
	}
	Shapes shape{ length,breadth,radius,a,b,c,d,height };
	outShapeFile<< "area of rectangle is" << shape.getRectangleArea() << endl << "perimeter of rectangle is" << shape.getRectanglePeri() << endl;
	outShapeFile<< "area of Square is" << shape.getSquareArea() << endl << "perimeter of Square is" << shape.getSquarePeri() << endl;
	outShapeFile<< "area of Trapezium is" << shape.getTrapeziumArea() << endl << "perimeter of Trapezium is" << shape.getTrapeziumPeri() << endl;
	outShapeFile<< "area of circle is" << shape.getCircleArea() << endl << "perimeter of circle is" << shape.getCirclePeri() << endl;
}