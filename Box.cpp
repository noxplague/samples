/********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/1/2016
** Description: 5a -  This file is the Box class implmentation file
with all of the functions (methods).  Each function and its purpose
is described below.  Get functions were not specified.
********************************************************************/

//box.cpp is the box class implementation file

#include "box.hpp"

/*****************************************************************
						Box::Box
Default constructor uses set methods and sets height, width, and 
length to 1.0, per the specification.

******************************************************************/		
Box::Box() {
	Box::setHeight(1.0); 
	Box::setWidth(1.0);
	Box::setLength(1.0);
}
/*****************************************************************
						Box::Box
Constructor for the Box object, uses the set functions(methods) to
initialize the three arguments, height, width, and length.

******************************************************************/		
Box::Box(double h, double w, double l) {
	Box::setHeight(h); 
	Box::setWidth(w);
	Box::setLength(l);
}

/*****************************************************************
						Box::setHeight
This is a standard set function(method) for the heigh private
class member

******************************************************************/

double Box::setHeight(double h) {
	height = h;
}
/*****************************************************************
						Box::setWidth
This is a standard set function(method) for the width private
class member
******************************************************************/
		
double Box::setWidth(double w) {
	width = w;
}
		
/*****************************************************************
						Box::setLength
This is a standard set function(method) for the length private
class member
******************************************************************/
double Box::setLength(double l) {
	length = l;
}

/*****************************************************************
						Box::getVolume

******************************************************************/
double Box::getVolume() {
	 double volume;
		
	 if(height == 0 || width == 0 || length == 0)
		 volume = 0.0;
	 else
		 volume = height * width * length;
	 return volume;
}

/*****************************************************************
						Box::getSurfaceArea
This function calcualtes the surface area of the box given the
user entered dimensions
******************************************************************/		
double Box::getSurfaceArea() {
	double surfaceArea;
	
	surfaceArea = (2*((height*width) + (width*length) + (height*length)));
	return surfaceArea;
}

