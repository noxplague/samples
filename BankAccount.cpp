/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/1/2016
** Description: 5b - Bank account class implmentation file  
*********************************************************************/

#include "BankAccount.hpp"
#include <string>

/*****************************************************************
					BankAccount::BankAccount


******************************************************************/	

BankAccount::BankAccount(){
	customerName = "";
	customerID = "";
	customerBalance = 0.0;
}

/*****************************************************************
					BankAccount::BankAccount


******************************************************************/	
BankAccount::BankAccount(string name, string id, double bal) {
	customerName = name;
	customerID = id;
	customerBalance = bal;
}
		
/*****************************************************************
					BankAccount::getCustomerName


******************************************************************/	
string BankAccount::getCustomerName(){
	return customerName;
	
}

/*****************************************************************
					BankAccount::getCustomerID


******************************************************************/			
		
string BankAccount::getCustomerID(){
	return customerID;
	
}
		
/*****************************************************************
					BankAccount::getCustomerBalance


******************************************************************/			
double BankAccount::getCustomerBalance(){
	return customerBalance;		
}
		
/*****************************************************************
					BankAccount::withdraw


******************************************************************/			
void BankAccount::withdraw(double wthdrw){
	double wthdrw;
	customerBalance = customerBalance - wthdrw;	
}
		
/*****************************************************************
					BankAccount::deposit


******************************************************************/			
void BankAccount::deposit(double dep){
	double dep;
	customerBalance = customerBalance + dep;
			
}