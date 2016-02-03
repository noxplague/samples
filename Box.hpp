/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/1/2016
** Description: 5a -  
*********************************************************************/

//box.hpp is my box specification file
#ifndef BOX_HPP
#define BOX_HPP

class Box {
	private:
		double height;
		double width;
		double length;
		
	
	public:
		
		Box(); // Default constructor
		Box(double h, double w, double l);  //Prototype constructor
		double setHeight(double);
		double setWidth(double);
		double setLength(double);
		double getVolume();
		double getSurfaceArea();
		
		
};

#endif
