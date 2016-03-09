/********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/29/2016
** Description: 10 - Book.cpp
********************************************************************/

#include <string>
#include <vector>
#include "Patron.hpp"

using namespace std;

/*****************************************************************
					Book:Book
Constructor
******************************************************************/
Book::Book(string idc, string t, string a) {
	idCode = idc;
	title = t;
	author = a;
	setLocation(ON_SHELF);
	setCheckedOutBy(NULL);
	setRequestedBy(NULL);
	setDateCheckedOut(0);
	
}

/*****************************************************************
					Book:getCheckOutLength

******************************************************************/

int Book::getCheckOutLength() {
	return CHECK_OUT_LENGTH;
}

/*****************************************************************
					Book::getIdCode

******************************************************************/
string Book::getIdCode() {
	return idCode;
}

/*****************************************************************
					Book::getTitle

******************************************************************/
string Book::getTitle() {
	return title;
}
/*****************************************************************
					Book::getAuthor

******************************************************************/
string Book::getAuthor() {
	return author;
}
/*****************************************************************
					Book::getLocation

******************************************************************/
Locale Book::getLocation() {
	return location;
}
/*****************************************************************
					Book::setLocation

******************************************************************/
void Book::setLocation(Locale l) {
	location = l;
}
/*****************************************************************
					Book::getCheckedOutBy

******************************************************************/
Patron* Book::getCheckedOutBy() {
	return checkedOutBy;
}
/*****************************************************************
					Book::setCheckedOutBy

******************************************************************/
void Book::setCheckedOutBy(Patron* p) {
	checkedOutBy = p;
}
/*****************************************************************
					Book::getRequestedBy

******************************************************************/
Patron* Book::getRequestedBy() {
	return requestedBy;
}
/*****************************************************************
					Book::setRequestedBy

******************************************************************/
void Book::setRequestedBy(Patron* p) {
	requestedBy = p;
}
/*****************************************************************
					Book::getDateCheckedOut

******************************************************************/
int Book::getDateCheckedOut() {
	return dateCheckedOut;
}
/*****************************************************************
					Book::setDateCheckedOut

******************************************************************/
void Book::setDateCheckedOut(int d){
	dateCheckedOut = d;
}