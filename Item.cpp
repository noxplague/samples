	
#include "Item.hpp"
#include <string>
	
	
	Item::Item() { //default constructor
		Item::setName(""); 
		Item::setPrice(0.0); 
		Item::setQuantity(0);
	}
	
	Item::Item(string n, double p, int q) { // Prototype
		Item::setName(n); 
		Item::setPrice(p); 
		Item::setQuantity(q);
	}
	
	//Setters
	
	void Item::setName(string s) {
		name = s;
	}
	
	void Item::setPrice(double p) {
		price = p;
	}
	
	void Item::setQuantity(int q) {
		quantity = q;
	}
	
	//Getters
   string Item::getName() {
		return name;
	}
	
	double Item::getPrice() {
		return price;
	}
	
	int Item::getQuantity() {
		return quantity;
	}
	
	