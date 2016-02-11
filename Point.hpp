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
	Point(double x, double y); //Prototype constructor
	void setXCoord(double);
	void setYCoord(double);
	double getXCoord() const;
	double getYCoord() const;
	double distanceTo(const Point&);

};

#endif