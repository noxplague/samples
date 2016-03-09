/********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/29/2016
** Description: 10 - Patron.cpp
********************************************************************/
#include <string>
#include <vector>
#include "Patron.hpp"
#include "Book.hpp"

using namespace std;

/*****************************************************************
					Patron::Patron

******************************************************************/
    Patron::Patron(std::string idn, std::string n) {
    	idNum = idn;
    	name = n;
    	fineAmount = 0.0;
    }
/*****************************************************************
					Patron::getIdNum

******************************************************************/    
    string Patron::getIdNum() {
    	return idNum;
    }
/*****************************************************************
					Patron::getName

******************************************************************/    
    string Patron::getName() {
    	return name;
    }
    
/*****************************************************************
					getCheckedOutBooks

******************************************************************/     
vector<Book*> Patron::getCheckedOutBooks() {
		return checkedOutBooks;
}
/*****************************************************************
					Patron::addBook
Uses the push_back function to add to the vector
******************************************************************/ 
void Patron::addBook(Book* b) {
	checkedOutBooks.push_back(b);
}
/*****************************************************************
					Patron::removeBook
Goes through the vector and finds the correct book before removing
******************************************************************/
void Patron::removeBook(Book* b) {
	int offSet;
	for (int i = 0; i < checkedOutBooks.size(); i++) {
		if (b == checkedOutBooks[i])
			offSet = i;
	}	
	checkedOutBooks.erase(checkedOutBooks.begin()+offSet);
   
}
/*****************************************************************
					Patron::getFineAmount

******************************************************************/
double Patron::getFineAmount() {
	return fineAmount;
}
/*****************************************************************
					Patron::amendFine
Takes the current amount and adds the new fine to it.  Relies oneway
Library for the incrementer. 
******************************************************************/
void Patron::amendFine(double amount) {
	fineAmount =  fineAmount + amount;
}