/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/8/2016
** Description: 6 - 

*********************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"


class LineSegment {

private:
	Point point1;
	Point point2;
	

public:
	LineSegment();  //default constructor
	LineSegment(Point, Point); //Prototype constructor
	Point setEnd1();
	Point setEnd2();
	Point getEnd1();
	Point getEnd2();
	double length();
	double slope();

};

#endif