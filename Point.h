#pragma once
#include <string >
using namespace std;
class Point
{
private:
	double x;
	double y;

public:
	const double& get_x() const { return x; }
	const double& get_y() const { return y; }

	void set_x(const double x_);
	void set_y(const double y_);
	double distance_to_point(const Point point) const;
	void move_x(double x);
	void move_y(double y);
	

	void Init(double x, double );
	void Read();
	void Display() const;
};

