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

using namespace std;

std::vector<Book*> holdings;
    std::vector<Patron*> members;
    int currentDate;


/*****************************************************************
					Library::Library();
constructor that initializes the currentDate to zero
******************************************************************/
   
Library::Library();
/*****************************************************************
					Library::addBook(Book*)
adds the parameter to holdings
******************************************************************/
void Library::addBook(Book*) {

}
/*****************************************************************
					Library::addPatron(Patron*)
adds the parameter to members
******************************************************************/
    
void Library::addPatron(Patron*);
/*****************************************************************
					Library::checkOutBook(std::string pID, std::string bID)
if the specified Book is not in the Library, return "book not found"
if the specified Patron is not in the Library, return "patron not found"
if the specified Book is already checked out, return "book already checked out"
if the specified Book is on hold by another Patron, return "book on hold by other patron"
otherwise update the Book's checkedOutBy, dateCheckedOut and Location; if the Book was on hold for this Patron, update requestedBy; update the Patron's  checkedOutBooks; return "check out successful"
******************************************************************/
 
string Library::checkOutBook(std::string pID, std::string bID);
/*****************************************************************
					Library::returnBook(std::string bID)
if the specified Book is not in the Library, return "book not found"
if the Book is not checked out, return "book already in library"
update the Patron's checkedOutBooks; update the Book's location depending on whether another Patron has requested it; update the Book's checkedOutBy; return "return successful"
******************************************************************/
  
    std::string Library::returnBook(std::string bID);
/*****************************************************************
					Library::requestBook(std::string pID, std::string bID)
if the specified Book is not in the Library, return "book not found"
if the specified Patron is not in the Library, return "patron not found"
if the specified Book is already requested, return "book already on hold"
update the Book's requestedBy; if the Book is on the shelf, update its location to on hold; return "request successful"
******************************************************************/
   
    std::string Library::requestBook(std::string pID, std::string bID);
/*****************************************************************
					Library::payFine(std::string pID, double payment);
takes as a parameter the amount that is being paid (not the negative of that amount) if the specified Patron is not in the Library, return "patron not found"
use amendFine to update the Patron's fine; return "payment successful"
******************************************************************/
    
    std::string Library::payFine(std::string pID, double payment);
/*****************************************************************
					Library::incrementCurrentDate();
increment current date; increase each Patron's fines by 10 cents for each overdue Book they have checked out (using amendFine)
If a book is checked out on day 0, then on day 1, the patron has had it for 1 day. On day 21, the patron has had it for 21 days, so it is still not overdue. On day 22, the book is overdue and fines will be charged.
******************************************************************/
   
    void Library::incrementCurrentDate();
/*****************************************************************
					Patron::amendFine

******************************************************************/
    Patron* Library::getPatron(std::string pID);
/*****************************************************************
					Patron::amendFine

******************************************************************/
    Book* Library::getBook(std::string bID);