/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/8/2016
** Description: 6 - This is implmentation file for the LineSegment
class.  It uses the Point class & objects to create Line Segment Classes
and perform calculations on those Line Segments.

*********************************************************************/
#include <cmath>
#include "Point.hpp"
#include "LineSegment.hpp"

/*****************************************************************
					LineSegment::LineSegment
Prototype constructor for the LineSegment.  No default constructor
required per the assignment spec.

******************************************************************/	

LineSegment::LineSegment(Point p1, Point p2) { //Prototype constructor
	LineSegment::setEnd1(p1);
	LineSegment::setEnd2(p2);
} 
/*****************************************************************
					LineSegment::setEnd1
Sets our first endpoint using a Point object

******************************************************************/		

void LineSegment::setEnd1(Point p1) {
	endPoint1 = p1;
}
/*****************************************************************
					LineSegment::setEnd2
Sets our second endpoint using a Point object

******************************************************************/	
void LineSegment::setEnd2(Point p2) {
	endPoint2 = p2;
}
/*****************************************************************
					LineSegment::getEnd1
Returns our first endpoint using a Point object

******************************************************************/	
Point LineSegment::getEnd1() {
	return endPoint1;
}
/*****************************************************************
					LineSegment::getEnd2
Returns our second endpoint using a Point object

******************************************************************/	
Point LineSegment::getEnd2() {
	return endPoint2;
}
/*****************************************************************
					LineSegment::length
Using the same forumla as the distanceTo function this time we are
able to call the get functions against each endpoint since the Line
Segment is made up of Point objects!
******************************************************************/	
double LineSegment::length() {
	return sqrt(pow((endPoint1.getXCoord() - endPoint2.getXCoord()),2) + pow((endPoint1.getYCoord() - endPoint2.getYCoord()), 2));
}
/*****************************************************************
					LineSegment::slope
This function calculates the slope of the line segment by calling
the point sunctions to get the the end point coordinate values
and uses the slope equation slope = (y2 - y1) / (x2 - x1)
******************************************************************/	
double LineSegment::slope() {
	
		return (endPoint2.getYCoord() - endPoint1.getYCoord()) / (endPoint2.getXCoord() - endPoint1.getXCoord()) ; // (y2 - y1)/(x2 - x1)
}
