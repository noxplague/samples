

#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"

using std::cin;
using std::cout;
using std::endl;


int main() {
	Point p1(-1.5, 0.0);
	Point p2(1.5, 4.0);
	double dist = p1.distanceTo(p2);
	Point p1(4.3, 7.52);
	Point p2(-17.0, 1.5);
	LineSegment ls1(p1, p2);
	double length = ls1.length();
	double slope = ls1.slope();
}