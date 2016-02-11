/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/8/2016
** Description: 6 - This point class header file is pretty standard
with the addition of the new "constant reference" concept.

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
	double getXCoord() const; //Const so the distanceTo function has a const function to call
	double getYCoord() const; //Const so the distanceTo function has a const function to call
	double distanceTo(const Point&); //Function using a constant reference, both of the functions it calls are also constant

};

#endif