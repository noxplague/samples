/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/8/2016
** Description: 6 - 

*********************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

class Point {

private:
	double xaxis;
	double yaxis;
	

public:
	Point();  //default constructor
	Point(double, double); //Prototype constructor
	void setXCoord();
	void setYCoord();
	double getXCoord();
	double getYCoord();
	double distanceTo(const Point&);

};

#endif