/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/24/2016
** Description: 8 - This is implementation file provides the Shopping Cart class functions.
*********************************************************************/

#include <cstdlib>
#include "Item.hpp"
#include "ShoppingCart.hpp"
#include <iostream>

using namespace std;

/*****************************************************************
					ShoppingCart::ShoppingCart
Default constructor for ShoppingCart.  This sets all array items, which are pointers to Items to NULL and makes sure the array index is set to zero.

******************************************************************/	

ShoppingCart::ShoppingCart(){ //Default constructor
		
		
		for (int i = 0; i < MAX_CART_SIZE; i++)
			arrItem[i] = NULL;
		arrayEnd = 0;
} 
/*
ShoppingCart::ShoppingCart(Item *arrCart, int size) { // Prototype constructor
		
} 
*/	

/*****************************************************************
					ShoppingCart::addItem
addItem function adds an Item pointer to the ShoppingCart array.
First it sets the current array item index to the pointer value passed then it increases the array index to the next item.

******************************************************************/
void ShoppingCart::addItem(Item *pointer){
	if (arrayEnd < MAX_CART_SIZE) {
		arrItem[arrayEnd] = pointer;
		arrayEnd++;
	}
	else
		cout << "Cart is full!" << endl;
}

/*****************************************************************
					ShoppingCart::totalPrice
This function returns the total price of all the items in the cart.
To do this it iterates through all items in the array and adds the quantity multiplied by the price to the total.  It checks to make sure it doesn't try adding a NULL value and cause a segmentation fault.
******************************************************************/
double ShoppingCart::totalPrice(){
		double total = 0.0;
		for (int i = 0; i < arrayEnd; i++) {
			if (arrItem[i] != NULL)
				total += ((arrItem[i]->Item::getQuantity()) * (arrItem[i]->Item::getPrice()));
		return total;
		}
}

/*  These two functions were for testing purposes to check the contents of shopping cart.

int ShoppingCart::arrEndPrint() {
	return arrayEnd;
}

void ShoppingCart::printCart(){
		for (int i = 0; i < arrayEnd; i++) {
			if (arrItem[i] != NULL) {
				cout << arrItem[i]->Item::getQuantity() <<endl;
				cout << arrItem[i]->Item::getPrice() <<endl;
			}
		}
}

*/