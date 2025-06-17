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
	cout << " Enter Length: ";
	cin >> length;
	outShapeFile << "Input Data: " << endl;
	outShapeFile << "length: " << length << endl;
	cout << "\n Enter Breadth: ";
	cin >> breadth;
	outShapeFile << "Breadth: " << breadth << endl;
	cout << "\n Enter Radius: ";
	cin >> radius;
	outShapeFile << "Radius: " << radius << endl;
	cout << "\n Enter sides of trapezium (a,b,c,d): ";
	cin >> a >> b >> c >> d;
	outShapeFile << "Sides(a,b,c,d) of Trapezium: " << a << ' ' << b << ' ' << c << ' ' << d << ' ' << endl;
	cout << "\n Enter height of Trapezium: ";
	cin >> height;
	outShapeFile << "Height of Trapezium: " << height << endl;
	/*while (cin >> length >> breadth >> radius >> a >> b >> c >> d >> height)
	{
		outShapeFile << length << ' ' << breadth << ' ' << radius << ' ' << a << ' ' << b << ' ' << c << ' ' << d << ' ' << height << endl;
		cout << "?";
	}*/
	Shapes shape{ length,breadth,radius,a,b,c,d,height };
	outShapeFile << "Rectangle:" << endl << "		Length: " << length << endl << "		Breadth: " << breadth << endl <<
		"		Area: " << shape.getRectangleArea() << endl << "		Perimeter: " << shape.getRectanglePeri() << endl;
	outShapeFile << "Square:" << endl << "		Length: " << length << endl << "		Breadth: " << breadth << endl <<
		"		Area: " << shape.getSquareArea() << endl << "		Perimeter: " << shape.getSquarePeri() << endl;
	outShapeFile << "Trapezium:" << endl << "		Side a: " << a << endl << "		Side b: " << b << endl << "		Side c: "
		<< c << endl << "		Side d: " << d << endl << "		Height: " << height << endl <<
		"		Area: " << shape.getTrapeziumArea() << endl << "		Perimeter: " << shape.getTrapeziumPeri() << endl;
	outShapeFile << "Circle:" << endl << "		Radius: " << radius << endl << "		Area: " << shape.getCircleArea() << endl << "		Perimeter: " << shape.getCirclePeri() << endl;
}