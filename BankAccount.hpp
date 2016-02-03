/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/1/2016
** Description: 5b - BankAccount header file 
*********************************************************************/

//box.hpp is my box specification file
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>

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