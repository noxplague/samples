/********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/29/2016
** Description: 10 - Library.cpp
********************************************************************/

#include <string>
#include <vector>
#include "Patron.hpp"
#include "Book.hpp"
#include "Library.hpp"

using namespace std;

/*****************************************************************
					Library::Library();
constructor that initializes the currentDate to zero
******************************************************************/
   
Library::Library() {
	currentDate = 0;
}
/*****************************************************************
					Library::addBook(Book*)
adds the parameter to holdings
******************************************************************/
void Library::addBook(Book* b) {
	holdings.push_back(b);
}
/*****************************************************************
					Library::addPatron(Patron*)
adds the parameter to members
******************************************************************/
    
void Library::addPatron(Patron* p) {
	members.push_back(p);
} 
/*****************************************************************
					Library::checkOutBook(std::string pID, std::string bID)
if the specified Book is not in the Library, return "book not found"
if the specified Patron is not in the Library, return "patron not found"
if the specified Book is already checked out, return "book already checked out"
if the specified Book is on hold by another Patron, return "book on hold by other patron"
otherwise update the Book's checkedOutBy, dateCheckedOut and Location; if the Book was on hold for this Patron, update requestedBy; update the Patron's  checkedOutBooks; return "check out successful"
******************************************************************/
 
string Library::checkOutBook(std::string pID, std::string bID) {
	//check book is in Library
	bool bookFound = false;
	Book *book = NULL;
		for (int i = 0; i < holdings.size(); i++) {
			string name = holdings[i]->Book::getIdCode();
				if (name == bID)
					bookFound = true;
					book = holdings[i];
		}
	if (!bookFound)
		return "Book not found!";
	//Check patron in in Library
	bool patronFound = false;
	Patron *patron = NULL;
		for (int i = 0; i < members.size(); i++) {
			string name = members[i]->Patron::getIdNum();
				if (name == pID) {
					patronFound = true;
					patron = members[i];
				}
		}
	if (!patronFound)
		return "Patron not found!";
	//Check location
	Locale status;
	
	int offSet;
	for (int i = 0; i < holdings.size(); i++) {
		if (bID == holdings[i]->Book::getIdCode())
			offSet = i;
	}
		status = holdings[offSet]->Book::getLocation();
			//Checked out
			if (status == CHECKED_OUT)
				return "Book already checked out!";
			//on hold
			else if (status == ON_HOLD_SHELF) {
				//on hold by person trying to check it out
				if (patron == holdings[offSet]->Book::getRequestedBy()) {
					holdings[offSet]->Book::setDateCheckedOut(currentDate);
					holdings[offSet]->Book::setCheckedOutBy(patron);
					holdings[offSet]->Book::setLocation(CHECKED_OUT);
					holdings[offSet]->Book::setRequestedBy(NULL);
					patron->Patron::addBook(holdings[offSet]);
					
					return "Check out successful!";
				}
				//on hold and a different patron trying to check out
				else	
					return "Book on hold by another patron.";
			}
			//book is on shelf and is checked out
			else {
				holdings[offSet]->Book::setDateCheckedOut(currentDate);
				holdings[offSet]->Book::setCheckedOutBy(patron);
				holdings[offSet]->Book::setLocation(CHECKED_OUT);
				holdings[offSet]->Book::setRequestedBy(NULL);
				patron->Patron::addBook(holdings[offSet]);
				
				return "Check out successful!";
			}
}

/*****************************************************************
					Library::returnBook(std::string bID)
if the specified Book is not in the Library, return "book not found"
if the Book is not checked out, return "book already in library"
update the Patron's checkedOutBooks; update the Book's location depending on whether another Patron has requested it; update the Book's checkedOutBy; return "return successful"
******************************************************************/
  
    std::string Library::returnBook(std::string bID) {	
		Book *pointer = NULL;
		for (int i = 0; i < holdings.size(); i++) {
			if (bID == holdings[i]->Book::getIdCode())
				pointer = holdings[i];
		}
		if (!pointer)
			return "Book not found.";
		Locale status = pointer->Book::getLocation();
		//Check location
		if (status == CHECKED_OUT) {
			Patron *patron = pointer->Book::getCheckedOutBy();
			patron->Patron::removeBook(pointer);
			pointer->Book::setCheckedOutBy(NULL);
				if (pointer->Book::getRequestedBy())
					pointer->Book::setLocation(ON_HOLD_SHELF);
				else
					pointer->Book::setLocation(ON_SHELF);
			return "Return successful!";
		}
		else if (status == ON_SHELF || status == ON_HOLD_SHELF)
			return "Book already in library.";
    }
/*****************************************************************
					Library::requestBook(std::string pID, std::string bID)
if the specified Book is not in the Library, return "book not found"
if the specified Patron is not in the Library, return "patron not found"
if the specified Book is already requested, return "book already on hold"
update the Book's requestedBy; if the Book is on the shelf, update its location to on hold; return "request successful"
******************************************************************/
   
std::string Library::requestBook(std::string pID, std::string bID){
    	//check book is in Library
		bool bookFound = false;
		Book *pointer;
		for (int i = 0; i < holdings.size(); i++) {
			string name = holdings[i]->Book::getIdCode();
				if (name == bID) {
					pointer = holdings[i];
					bookFound = true;
				}
		}
		if (!bookFound)
			return "Book not found!";
    	//check if Patron is a member
    	Patron* patron = Library::getPatron(pID);
    	if (patron != NULL) {
    		if (pointer->Book::getRequestedBy())
    			return "Book already on hold.";
    		else {
				Locale status = pointer->Book::getLocation();
				if (status == ON_SHELF) 
    				pointer->Book::setLocation(ON_HOLD_SHELF);
    			pointer->Book::setRequestedBy(patron);
    		return "Request successful.";
    			}
    	}
    	else
    		return "Patron not found.";
    
    }
/*****************************************************************
					Library::payFine(std::string pID, double payment);
takes as a parameter the amount that is being paid (not the negative of that amount) if the specified Patron is not in the Library, return "patron not found"
use amendFine to update the Patron's fine; return "payment successful"
******************************************************************/
    
    std::string Library::payFine(std::string pID, double payment) {
    	if (Library::getPatron(pID)) {
    		Library::getPatron(pID)->Patron::amendFine(-(payment));
    		return "Payment successful.";
    	}
    	else
    		return "Patron not found.";
    }
/*****************************************************************
					Library::incrementCurrentDate();
increment current date; increase each Patron's fines by 10 cents for each overdue Book they have checked out (using amendFine)
If a book is checked out on day 0, then on day 1, the patron has had it for 1 day. On day 21, the patron has had it for 21 days, so it is still not overdue. On day 22, the book is overdue and fines will be charged.
******************************************************************/
   
    void Library::incrementCurrentDate() {
    	double fine = 0.1;
    	for (int i = 0; i < members.size(); i++) {
    		vector<Book*> output;
	 		int vecSize;
	 		output = members[i]->Patron::getCheckedOutBooks();
	 		vecSize = output.size();
	 		for (int index = 0; index < vecSize; index++) {
				int daysOverdue = (currentDate - output[index]->Book::getDateCheckedOut());
				if (daysOverdue > 21) {
					members[i]->Patron::amendFine(fine);
				}
			}
    	}
    	currentDate++;
    }
/*****************************************************************
					Library::getPatron(std::string pID)
Returns a pointer to Patron with patron ID number pID
******************************************************************/
    Patron* Library::getPatron(std::string pID) {
    	Patron *patron = NULL;
		for (int i = 0; i < members.size(); i++) {
			string name = members[i]->Patron::getIdNum();
				if (name == pID) {
					patron = members[i];
    			}
    	}	
    	return patron;
    }
/*****************************************************************
					Library::getBook(std::string bID)
Returns a pointer to book with book id bID
******************************************************************/
    Book* Library::getBook(std::string bID) {
    	Book *book = NULL;
		for (int i = 0; i < holdings.size(); i++) {
			string name = holdings[i]->Book::getIdCode();
				if (name == bID)
					book = holdings[i];
		}
    	return book;
    }