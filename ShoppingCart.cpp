#include <cstdlib>
#include "Item.hpp"
#include "ShoppingCart.hpp"
#include <iostream>

using namespace std;

ShoppingCart::ShoppingCart(){ //Default constructor
		
		
		for (int i = 0; i < MAX_CART_SIZE; i++)
			arrItem[i] = NULL;
		arrayEnd = 0;
} 
/*
ShoppingCart::ShoppingCart(Item *arrCart, int size) { // Prototype constructor
		
} 
*/	
void ShoppingCart::addItem(Item *pointer){
		arrItem[arrayEnd] = pointer;
		arrayEnd++;
}

double ShoppingCart::totalPrice(){
		double total = 0.0;
		for (int i = 0; i < arrayEnd; i++) {
			if (arrItem[i] != NULL)
				total += ((arrItem[i]->Item::getQuantity()) * (arrItem[i]->Item::getPrice()));
			else
				i++;
			
		return total;
		}
}

/*
double ShoppingCart::totalPrice(){
		double total = 0.0;
		//Item pointer = arrItem; 
		for (int i = 0; i < arrayEnd; i++) {
			total += (&arrItem[i].Item::getQuantity()) * (&arrItem[i].Item::getPrice());
		return total;
		}
}
*/
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