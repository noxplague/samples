/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 1/24/2016
** Description: 4c - 
*********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int hailstone(int num) {

int counter;

	while (num != 1) {
		if ((num % 2) == 0)
			num = num / 2;
		else
			num = num * 3 + 1;
	
	counter++
	}

return counter;

}

int main() {

	cout << "Please enter a positive integer to calculate its hailstone count:" << endl;
	cin >> number;
	
	number = hailstone(number);
	cout << "Your hailstone value is: " << number << endl;
	
	return 0;

}