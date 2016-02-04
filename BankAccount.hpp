/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/1/2016
** Description: 5b - BankAccount header file with the three private 
data members, the contructors, get functions(methods), and balance
changing functions.

This will enable the creation of bank account objects and to change
the balance of these objects using the included fucntions.
*********************************************************************/

//box.hpp is my box specification file
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>
using namespace std::string;


class BankAccount {
	private:
		string customerName;
		string customerID;
		double customerBalance;
		
	
	public:
		
		BankAccount(); // Default constructor
		BankAccount(string, string, double);  //Prototype constructor
		string getCustomerName();
		string getCustomerID();
		double getCustomerBalance();
		void withdraw(double);
		void deposit(double);
		
};

#endif