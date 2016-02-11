/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/8/2016
** Description: 6 -  This is header file for the LineSegment class.
This class uses the Point class to create objects of made from objects.

*********************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"


class LineSegment {

private:
	Point endPoint1;
	Point endPoint2;
	

public:
	LineSegment(Point, Point); //Prototype constructor
	void setEnd1(Point); //Sets our first endpoint using a Point object
	void setEnd2(Point); //Sets our second endpoint using a Point object
	Point getEnd1(); //Returns our first endpoint using a Point object
	Point getEnd2(); //Returns our second endpoint using a Point object
	double length(); //New function for calculating the length of the line segment
	double slope(); //New function for calculating the slope of the line segment

};

#endif