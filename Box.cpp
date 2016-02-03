/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/1/2016
** Description: 5a -  
*********************************************************************/

//box.cpp is the box class implementation file

#include "box.hpp"

/*****************************************************************
						Box::Box

******************************************************************/		
Box::Box(double h, double w, double l) {
	Box::setHeight(h); 
	Box::setWidth(w);
	Box::setLength(l);
}

/*****************************************************************
						Box::setHeight

******************************************************************/

double Box::setHeight(double h) {
	height = h;
	return height;
}
/*****************************************************************
						Box::setWidth

******************************************************************/
		
double Box::setWidth(double w) {
	width = w;
	return width;
}
		
/*****************************************************************
						Box::setLength

******************************************************************/
double Box::setLength(double l) {
	length = l;
	return length;
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

******************************************************************/		
double Box::getSurfaceArea() {
	double surfaceArea;
	
	surfaceArea = (2*((height*width) + (width*length) + (height*length)));
	return surfaceArea;
}

