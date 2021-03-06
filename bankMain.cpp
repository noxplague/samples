#include <iostream>
#include <string>
#include "BankAccount.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	
	double userAmount, userAmount2;
	
	BankAccount account1;
	
	cout << "Customer name:" << account1.getCustomerName() << endl;
	cout << "Customer ID:" << account1.getCustomerID() << endl;
	cout << "Customer balance:" << account1.getCustomerBalance() << endl;
	
	cout << "How much would you like to deposit: " << endl;
	cin >> userAmount;
	account1.deposit(userAmount);
	cout << "Customer balance:" << account1.getCustomerBalance() << endl;
	
	
	string userName, userID;
	double userBalance;
	
	cout << "Create a new account, please enter a Name, ID, and " ;
	cout << "starting account balance: " << endl;
	cin >> userName >> userID >> userBalance;
	BankAccount account2(userName, userID, userBalance);
	
	cout << "Customer name: " << account2.getCustomerName() << endl;
	cout << "Customer ID: " << account2.getCustomerID() << endl;
	cout << "Customer balance: " << account2.getCustomerBalance() << endl;
	
	
	
	cout << "How much would you like to deposit: " << endl;
	cin >> userAmount;
	account2.deposit(userAmount);
	cout << "Customer balance:" << account2.getCustomerBalance() << endl;
	
	cout << "How much would you like to withdraw: " << endl;
	cin >> userAmount2;
	account2.withdraw(userAmount2);
	cout << "Customer balance: " << account2.getCustomerBalance() << endl;
	
	return 0;
	
}
