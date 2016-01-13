#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	
	//using unsigned since we only want positive values > 0
	unsigned int cents;
	unsigned int quarters;
	unsigned int dimes;
	unsigned int nickels;
	unsigned int pennies;
	unsigned int remainder;
	
	
	
	cout << "Please enter an amount in cents less than a dollar" << endl;
	cin >> cents;  //Getting user input for cents, should be a number between 0 and 99
	
	//Here we find the values, we pass the remainder on to each variable since that is the remaining amount that needs to be divided by the next possible coin amount.  Also because we used int we know that the fractional values will be ignored when assigning quarters, dimes, nickels, and pennies.  If we double (aka real numbers) this would not work.
	quarters = cents / 25;
	remainder = cents % 25;
	dimes = remainder / 10;
	remainder = remainder % 10;
	nickels = remainder / 5;
	remainder = remainder % 5;
	pennies = remainder / 1;
	
	//Printing the results
	cout << "Your change will be:" << endl;
	cout << "Q:" << quarters << endl;
	cout << "D:" << dimes << endl;
	cout << "N:" << nickels << endl;
	cout << "P:" << pennies << endl;

	return 0;	
}
	