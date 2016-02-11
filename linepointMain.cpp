

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
	
	/*
	cout << p1 << endl;
	cout << p2 << endl;
	*/
	cout << dist << endl;
	
	
	Point p3(4.3, 7.52);
	Point p4(-17.0, 1.5);
	LineSegment ls1(p3, p4);
	double length = ls1.length();
	double slope = ls1.slope();
	
	
	cout << length <<endl;
	cout << slope << endl;
	
	
	Point p5(4.3, 7.52);
	Point p6(4.3, 1.5);
	LineSegment ls2(p5, p6);
	double len2 = ls2.length();
	double slo2 = ls2.slope();
	
	
	cout << len2 <<endl;
	cout << slo2 << endl;
}