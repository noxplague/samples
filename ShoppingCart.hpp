/*
Define a ShoppingCart class which contains as a data member an array of pointer-to-Item (Item*) that can contain up to 100 Item pointers. It should also have an int data member called arrayEnd that keeps track of the index of the next empty spot in the array.  You should have a default constructor that initializes each element of the array to NULL and initializes arrayEnd to zero.  It should have a function called addItem that takes as a parameter a pointer to an Item and adds it to the array (and updates arrayEnd).  It should have a function called totalPrice that returns the total cost of all Items in the ShoppingCart (for which you must take into account the quantity of each Item).  
*/
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
		int arrEndPrint();
		void printCart();
};

#endif