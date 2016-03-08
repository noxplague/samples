
#include <string>
#include <iostream>
#include "Book.hpp"
#include "Patron.hpp"

using namespace std;

int main () {
	
	
	Book b1("123", "War and Peace", "Tolstoy"); 
	Book b2("234", "Moby Dick", "Melville");
	Book b3("345", "Phantom Tollbooth", "Juster"); 
	Patron p1("abc", "Felicity");
	Patron p2("bcd", "Waldo");

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
	
	b1.Book::setRequestedBy(&p1);
	b1.Book::setCheckedOutBy(&p1);
	b1.Book::Book::setLocation(CHECKED_OUT);
	
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
	
	// p1.Patron::removeBook(&b1);
	 vecSize = output.size();
	 for (int index = 0; index < vecSize; index++) 
		std::cout << output[index] << " " << endl;
	 
	 //cout << p2.Patron::getCheckedOutBooks() << endl;
	

	return 0;
}