/****************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/21/2016
** Description: 8 - This is the header file for the Item class
****************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

using namespace std;

class Item {

	private:
		string name;
		double price;
		int quantity;
	
	public:
	
		Item(); //default constructor
		Item(string n, double p, int q); // Prototype
	
		//Getters
		string getName();
		double getPrice();
		int getQuantity();
		//Setters
		void setName(string);
		void setPrice(double);
		void setQuantity(int);
};

#endif