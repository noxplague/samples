
#include <string>
#include <iostream>
#include "Book.hpp"
#include "Patron.hpp"
#include "Library.hpp"

using namespace std;

int main () {
	
	
	Book b1("123", "War and Peace", "Tolstoy"); 
	Book b2("234", "Moby Dick", "Melville");
	Book b3("345", "Phantom Tollbooth", "Juster"); 
	Patron p1("abc", "Felicity");
	Patron p2("bcd", "Waldo");
	
	/*
	b1.Book::setRequestedBy(&p1);
	b1.Book::setCheckedOutBy(&p2);
	b1.Book::setLocation(ON_HOLD_SHELF);
	
	
	cout << b1.Book::getRequestedBy() << endl;
	cout << b1.Book::getCheckedOutBy() << endl;
	cout << b1.Book::getLocation() << endl;
	
	b2.Book::setRequestedBy(&p2);
	b2.Book::setCheckedOutBy(&p2);
	b2.Book::Book::setLocation(CHECKED_OUT);
	
	cout << b2.Book::getRequestedBy() << endl;
	cout << b2.Book::getCheckedOutBy() << endl;
	cout << b2.Book::getLocation() << endl;
	
	 p1.Patron::addBook(&b1);
	 p1.Patron::addBook(&b2);
	 p1.Patron::addBook(&b3);
	 
	 vector<Book*> output;
	 int vecSize;
	 output = p1.Patron::getCheckedOutBooks();
	 vecSize = output.size();
	 for (int index = 0; index < vecSize; index++) 
		std::cout << output[index] << " " << endl; 
	
	 p1.Patron::removeBook(&b2);
	 p1.Patron::removeBook(&b3);
	 output = p1.Patron::getCheckedOutBooks();
	 vecSize = output.size();
	 cout << output.size() << endl;
	 for (int index = 0; index < vecSize; index++) 
		std::cout << output[index] << " " << endl;
	Library lb1;
	lb1.Library::addBook(&b1);
	lb1.Library::addPatron(&p1);
	lb1.Library::addBook(&b2);
	
	cout << b1.Book::getRequestedBy()->Patron::getName() << endl;
	cout << b1.Book::getCheckedOutBy()->Patron::getName() << endl;
	
	cout << lb1.Library::checkOutBook("abc", "123") << endl;
	cout << lb1.Library::checkOutBook("abc", "234") << endl;
	cout << lb1.Library::checkOutBook("bcd", "123") << endl;
	
	//cout << b1.Book::getRequestedBy()->Patron::getName() << endl;
	cout << b1.Book::getCheckedOutBy()->Patron::getName() << endl;
	cout << b1.Book::getLocation() << endl;
	
	vector<Book*> output;
	 int vecSize;
	 output = p1.Patron::getCheckedOutBooks();
	 vecSize = output.size();
	 for (int index = 0; index < vecSize; index++) 
		std::cout << output[index]->Book::getTitle() << " " << endl; 
	
	cout << lb1.Library::getPatron("abc") << endl;
	cout << lb1.Library::getBook("234") << endl;
	
	 //cout << p2.Patron::getCheckedOutBooks() << endl;
	
   
    Increment checker
    for (int i=0; i<22; i++) {
        lib.incrementCurrentDate();
        cout << lib.getCurrentDate() << endl;
        cout << p2.Patron::getFineAmount() << endl;
    }
    cout << p2.Patron::getFineAmount() << endl;
    
    lib.checkOutBook("bcd", "345");
    for (int i=0; i<22; i++) {
        lib.incrementCurrentDate();
        // cout << lib.getCurrentDate() << endl;
        //cout << p2.Patron::getFineAmount() << endl;
    }
    */
   // lib.checkOutBook("bcd", "234"); 
   
   	// Create library
   	Library lb1;
	
	//Add books
	
	lb1.Library::addBook(&b1);
	lb1.Library::addBook(&b2);
	lb1.Library::addBook(&b3);
	
	//Add Patron
	lb1.Library::addPatron(&p1);
	lb1.Library::addPatron(&p2);
	
	
	
	cout << lb1.Library::requestBook("abc", "123")  << endl;
	cout << lb1.Library::requestBook("bcd", "234")  << endl;
	cout << lb1.Library::requestBook("abc", "234")  << endl;
	cout << lb1.Library::requestBook("abc", "444")  << endl;
	cout << lb1.Library::requestBook("zzz", "123")  << endl;
	
	cout << lb1.Library::checkOutBook("bcd", "234") << endl;
	cout << lb1.Library::returnBook("234") << endl;
	cout << lb1.Library::requestBook("abc", "234")  << endl;
	cout << lb1.Library::checkOutBook("bcd", "234") << endl;
	
	cout << b2.Book::getRequestedBy()->Patron::getName() << endl;
	//cout << b2.Book::getCheckedOutBy()->Patron::getName() << endl;
	
	cout << lb1.Library::checkOutBook("abc", "234") << endl;
	cout << lb1.Library::checkOutBook("bcd", "345") << endl;
	
	vector<Book*> output;
	int vecSize;
	output = p2.Patron::getCheckedOutBooks();
	vecSize = output.size();
	for (int index = 0; index < vecSize; index++) 
		std::cout << output[index]->Book::getTitle() << " " << endl;
		
	cout << lb1.Library::checkOutBook("abc", "345") << endl;
    
    for (int i=0; i<23; i++)
		lb1.incrementCurrentDate(); 
	
	
	double p1Fine = p1.getFineAmount(); 
	double p2Fine = p2.getFineAmount();
    cout << p1Fine << endl;
    cout << p2Fine << endl;
    
    cout << lb1.Library::returnBook("345") << endl;
    cout << lb1.Library::returnBook("345") << endl;
    cout << lb1.Library::returnBook("555") << endl;
    cout << lb1.Library::returnBook("234") << endl;
    cout << b1.Book::getRequestedBy()->Patron::getName() << endl;
    cout << b1.Book::getLocation() << endl;
    cout << lb1.Library::returnBook("123") << endl;
	

	
    
    //lib.payFine("bcd", 0.4);
   /* 
     //checking book vector
    vector<Book*> output;
	 int vecSize;
	 output = p2.Patron::getCheckedOutBooks();
	 vecSize = output.size();
	 for (int index = 0; index < vecSize; index++) 
		std::cout << output[index]->Book::getTitle() << " " << endl; 
    
    cout << p2.Patron::getFineAmount() << endl;
    cout << lib.payFine("bcd", 2.3) << endl;
    cout << p2.Patron::getFineAmount() << endl;
    
    cout << lib.payFine("xkcd", 2.3) << endl;
    
    cout << lib.Library::returnBook("123") << endl;
    cout << lib.Library::returnBook("345") << endl;
    cout << lib.Library::returnBook("234") << endl;
    */
	return 0;
}


	/* Testing book and patron creation
	
	cout << b1.Book::getIdCode() << endl;
	cout << b2.Book::getIdCode() << endl;
	cout << b3.Book::getIdCode() << endl;
	
	cout << b1.Book::getTitle() << endl;
	cout << b2.Book::getTitle() << endl;
	cout << b3.Book::getTitle() << endl;
	
	cout << b1.Book::getAuthor() << endl;
	cout << b2.Book::getAuthor() << endl;
	cout << b3.Book::getAuthor() << endl;
	
	cout << p1.Patron::getIdNum() << endl;
	cout << p2.Patron::getIdNum() << endl;
	
	cout << p1.Patron::getName() << endl;
	cout << p2.Patron::getName() << endl;
	*/