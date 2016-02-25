/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/24/2016
** Description: 8 - This is implementation file provides the Item class functions.
*********************************************************************/	
#include "Item.hpp"
#include <string>


/*****************************************************************
					Item::Item
Default constructor for Item.  This sets an item with no name, zero price, and zero quntity.

******************************************************************/	
	
	Item::Item() { //default constructor
		Item::setName(""); 
		Item::setPrice(0.0); 
		Item::setQuantity(0);
	}
/*****************************************************************
					Item::Item
Prototype constructor for Item.  Takes the name, price, and quantity and sets them accordingly.

******************************************************************/	
	Item::Item(string n, double p, int q) { // Prototype
		Item::setName(n); 
		Item::setPrice(p); 
		Item::setQuantity(q);
	}
/*****************************************************************
					Item::setName
					Item::setPrice
					Item::setQuantity
Setters: Set the name, price, and quantity for the Item object.

******************************************************************/	
	
	void Item::setName(string s) {
		name = s;
	}
	
	void Item::setPrice(double p) {
		price = p;
	}
	
	void Item::setQuantity(int q) {
		quantity = q;
	}
	
/*****************************************************************
					Item::getName
					Item::getPrice
					Item::getQuantity
Getters: Return the name, price, and quantity for an Item object.

******************************************************************/	
   string Item::getName() {
		return name;
	}
	
	double Item::getPrice() {
		return price;
	}
	
	int Item::getQuantity() {
		return quantity;
	}
	
	