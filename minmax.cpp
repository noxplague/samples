/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 1/18/2016
** Description: 3a - The minmax program will ask the user how many inputs the user wants to enter greater or equal to 1.  Then the program will prompt the user for an integer the requested number of times, as chosen in the first step.  For example if the user stated they want to enter 20 inputs then the program will prompt the user for 20 numbers.  As the user enters integers (equal to the amount requested in the first step the program) the program does a logical test to see if the minimum or maximum number entered so far changes.  After all of the numbers have been entered, the program displays the lowest (minimum) value and the highest (maximum) entered by the user. 
*********************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main ()
{
	int min = 2147483647, max = -2147483648, numberOfIntegers, newNumber;
	
	cout << "How many integers would you like to enter?" << endl;
	cin >> numberOfIntegers;
	
	for (int counter = 1; counter <= numberOfIntegers; counter++) { //loop for the user determined number of tries
		cin >> newNumber;
		
		//Using two if statements because they are not mutually exclusive, particularly in the case that the user decides to enter 1 integer.
		if (newNumber > max) {
			max = newNumber;
		}
		if (newNumber < min) {
			min = newNumber;
		}
	}
	//Print results
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
	
}