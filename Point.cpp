#include "Point.h"
#include<iostream>

using namespace std;

void  Point::set_x(double value)
{
	x = value;
}
void  Point::set_y(double value)
{
	y = value;
}
void Point::Init(double x, double y)
{
	set_x(x);
	set_y(y);
}
double Point:: distance_to_point(const Point point) const
{
	return sqrt(
		std::pow(point.get_x() - x, 2) + std::pow(point.get_y() - y, 2));
}
void Point::move_x(double x)
{
	this->x += x;
}
void Point::move_y(double y)
{
	this->y += y;
}
void Point::Read()
{
	double x;
	double y;
	cout << "x = ? ";
	cin >> x;
	cout << "y = ? ";
	cin >> y;
	Init(x, y);

}
void Point::Display() const
{
	cout << " x = " << x << endl;
	cout << " y = " << y << endl;
}
