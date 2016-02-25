/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/24/2016
** Description: 8 - This is header file provides the shopping cart
class.
*********************************************************************/
#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

#include "Item.hpp"

const int MAX_CART_SIZE = 100;

class ShoppingCart {
	
	
	
	private:
		Item *arrItem[MAX_CART_SIZE];
		int arrayEnd;
	
	public:
		ShoppingCart(); //Default constructor
		ShoppingCart(int [MAX_CART_SIZE]); // Prototype constructor
	
		void addItem(Item *);
		double totalPrice();
		//int arrEndPrint();  For testing purposes
		//void printCart();   For testing purposes
};

#endif