/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 1/24/2016
** Description: 4c - hailstone counts how many times it must run before the input can be reduced to one using the given alogrithm based on it being even or odd. 
*********************************************************************/

/********************************************************************** 
*        hailstone                                                 	  * 
*   This function accepts a positive integer.  The while loop runs    *
*   until 1 is reached counting each time.  The if statement perfoms  *
*   based on even or odd value during each iteration.                 *
**********************************************************************/

int hailstone(int num) {

	int counter;

	while (num != 1) {
		if ((num % 2) == 0)
			num = num / 2;
		else
			num = num * 3 + 1;
	
	counter++;
	}

return counter;

}
/*  Test program

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	int number;

	cout << "Please enter a positive integer to calculate its hailstone count:" << endl;
	cin >> number;
	
	number = hailstone(number);
	cout << "Your hailstone value is: " << number << endl;
	
	return 0;

}

*/