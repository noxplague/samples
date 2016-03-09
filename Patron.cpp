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
	//for (int i = 0; i < checkedOutBooks.sizeof(); i++)
		return checkedOutBooks;
}
/*****************************************************************
					Patron::addBook

******************************************************************/ 
void Patron::addBook(Book* b) {
	checkedOutBooks.push_back(b);
}
/*****************************************************************
					Patron::removeBook

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

******************************************************************/
void Patron::amendFine(double amount) {
	fineAmount =  fineAmount + amount;
}