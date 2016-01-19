/*********************************************************************
** Author: Andrew ODonald
** Date: 1/18/2016
** Description: 3a
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
	
	for (int counter = 1; counter <= numberOfIntegers; counter++) {
		cin >> newNumber;
		
		/*  Would be interesting to check if the input is in fact an integer
		if (!(newNumber > -2147483648 || newNumber < 2147483647)) {
			cout << "Please enter a valid integer: " << endl;
			cin >> newNumber;
		}
		*/
		
		if (newNumber > max) {
			max = newNumber;
		}
		if (newNumber < min) {
			min = newNumber;
		}
	}
	
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
	
}