/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/1/2016
** Description: 5b - Bank account class implmentation file, 
purpose of each function described below.  Set functions explicitly
left out in the specification
*********************************************************************/

#include "BankAccount.hpp"
#include <string>



/*****************************************************************
					BankAccount::BankAccount
Here is a default "empty" BankAccount function for the default
constructor

******************************************************************/	

BankAccount::BankAccount(){
	customerName = "";
	customerID = "";
	customerBalance = 0.0;
}

/*****************************************************************
					BankAccount::BankAccount
Here is the standard BankAccount constructor function (method), 
since this specification asked for no "set" functions this function
assigns the values to the member variables

******************************************************************/	
BankAccount::BankAccount(std::string name, std::string id, double bal) {
	customerName = name;
	customerID = id;
	customerBalance = bal;
}
		
/*****************************************************************
					BankAccount::getCustomerName
Standard get function for returning the customer name string

******************************************************************/	
std::string BankAccount::getCustomerName(){
	return customerName;
	
}

/*****************************************************************
					BankAccount::getCustomerID
Standard get function for returning the customer ID string

******************************************************************/			
		
std::string BankAccount::getCustomerID(){
	return customerID;
	
}
		
/*****************************************************************
					BankAccount::getCustomerBalance
Standard get function for returning the customer account balance

******************************************************************/			
double BankAccount::getCustomerBalance(){
	return customerBalance;		
}
		
/*****************************************************************
					BankAccount::withdraw
this function performs a withdrawal from the bank account balance

******************************************************************/			
void BankAccount::withdraw(double wthdrw){
	
	customerBalance = customerBalance - wthdrw;	
}
		
/*****************************************************************
					BankAccount::deposit
this function performs a deposit to the bank account balance

******************************************************************/			
void BankAccount::deposit(double dep){
	
	customerBalance = customerBalance + dep;
			
}