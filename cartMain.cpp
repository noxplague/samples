

#include <iostream>
#include <string>
#include "Item.hpp"
#include "ShoppingCart.hpp"

using namespace std;

int main() {

	Item a("affidavit", 179.99, 12);
    Item b("Bildungsroman", 0.7, 20);
	Item c("capybara", 4.5, 6);
	Item d("dirigible", 0.05, 16);
	Item e;
	
	//int cartSize;
	
	//ShoppingCart sc2;
	
	
	
	//cout << sc2.ShoppingCart::arrEndPrint() << endl;
	
	ShoppingCart sc1;
    sc1.addItem(&a);
    sc1.addItem(&b);
    sc1.addItem(&c);
    sc1.addItem(&d);
    
	//cartSize = sc1.ShoppingCart::arrEndPrint();
	
	//cout << "Total cart items: " << cartSize << endl; 
	//cout << sc1 << endl;
	
	
	//  This checks that totalPrice works
	double diff = sc1.totalPrice();
	cout << "The total cost of shopping cart: " << diff << endl;
	
	//sc1.ShoppingCart::printCart();
	
	/*  This checks that the Item objects initialize correctly
	
	string name1 = a.Item::getName();
	cout << name1 << endl;
	
	string name2 = b.Item::getName();
	cout << name2 << endl;
	
	string name3 = c.Item::getName();
	cout << name3 << endl;
	
	string name4 = d.Item::getName();
	cout << name4 << endl;
    
    string name5 = e.Item::getName();
    cout << name5 << endl;  
      
    double p1 = a.Item::getPrice();
	cout << p1 << endl;
	
	double p2 = b.Item::getPrice();
	cout << p2 << endl;
	
	double p3 = c.Item::getPrice();
	cout << p3 << endl;
	
	double p4 = d.Item::getPrice();
	cout << p4 << endl;
    
    double p5 = e.Item::getPrice();
    cout << p5 << endl; 
    
	int q1 = a.Item::getQuantity();
	cout << q1 << endl;
    
    int q2 = b.Item::getQuantity();
	cout << q2 << endl;
	
	int q3 = c.Item::getQuantity();
	cout << q3 << endl;
	
	int q4 = d.Item::getQuantity();
	cout << q4 << endl;
	
	int q5 = e.Item::getQuantity();
	cout << q5 << endl;
    */
    
    return 0;
      
}