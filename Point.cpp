/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/8/2016
** Description: 6 - This is the implementation file for our Point class
We see the constant reference functions here

*********************************************************************/
#include <cmath>
#include "Point.hpp"

/*****************************************************************
					Point::Point
Default constructor, sets the points at 0.0 per assignment spec

******************************************************************/	

Point::Point() {
	Point::setXCoord (0.0);
	Point::setYCoord (0.0);
	
}  
	
	
/*****************************************************************
					Point::Point
Prototype constructor for Point.  Calls the set functions

******************************************************************/	
Point::Point(double x, double y) { 
	Point::setXCoord(x);
	Point::setYCoord(y);
}
/*****************************************************************
					Point::setXCoord
Standard set function for the x coordinate

******************************************************************/	
void Point::setXCoord(double x) {
	
	xaxis = x;
	
}
/*****************************************************************
					Point::setYCoord
Standard set function for the y coordinate

******************************************************************/	
void Point::setYCoord(double y) {
	
	yaxis = y;
	
}
/*****************************************************************
					Point::getXCoord


******************************************************************/	
double Point::getXCoord() const{
	return xaxis;
	
}
/*****************************************************************
					Point::getYCoord


******************************************************************/	
double Point::getYCoord() const{
	return yaxis;
	
}
/*****************************************************************
					Point::distanceTo
Taking a constant reference to a Point this function calculates 
distance between two points using a form of the pythagorean formula

******************************************************************/	
double Point::distanceTo(const Point &distToP){
	
	
	double xcoord1 = getXCoord();
	double ycoord1 = getYCoord();
	return sqrt(pow((distToP.getXCoord() - xcoord1),2) + pow((distToP.getYCoord() - ycoord1), 2));
	
}