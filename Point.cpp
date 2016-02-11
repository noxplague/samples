/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/8/2016
** Description: 6 - 

*********************************************************************/
#include <cmath>
#include "Point.hpp"

Point::Point() {
	Point::setXCoord (0.0);
	Point::setYCoord (0.0);
	
}  //default constructor
	
	
	
Point::Point(double x, double y) { //Prototype constructor
	Point::setXCoord(x);
	Point::setYCoord(y);
}

void Point::setXCoord(double x) {
	
	xaxis = x;
	
}

void Point::setYCoord(double y) {
	
	yaxis = y;
	
}

double Point::getXCoord() const{
	return xaxis;
	
}

double Point::getYCoord() const{
	return yaxis;
	
}

double Point::distanceTo(const Point &distToP){
	
	
	double xcoord1 = getXCoord();
	double ycoord1 = getYCoord();
	return sqrt(pow((distToP.getXCoord() - xcoord1),2) + pow((distToP.getYCoord() - ycoord1), 2));
	
}