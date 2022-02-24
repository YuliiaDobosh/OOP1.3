#include <iostream>
#include "Point.h"
using namespace std;
Point makePoint(double x, double y)
{
	Point xx;
	xx.Init(x, y);
	return xx;
}
int main()
{
	Point g;
	g.Read();
	g.Display();
	Point g1=g;
	g.move_x(-2);
	g.move_y(5);
	cout<<"Distance to point  = "<< g.distance_to_point(g1);
	Point f;
	f = makePoint(5, 7);
}

