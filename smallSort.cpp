/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 1/24/2016
** Description: 4b - smallSort is a function that takes three varialbes and then sorts them smallest to largest.  Because this done via reference varaibles the actual values in memory are changed.
*********************************************************************/


/********************************************************************** 
*        smallSort                                                 	  * 
*  Looks at the three values entered and does a test, is the middle   *
*   or first value larger than the last value, if true then the value *
*  is swapped so that largest is the highest value.  This repeated    *
*  for finding the lowest value by comparing the 2nd and 3rd numbers  *
*  with the first.                                                    *
**********************************************************************/

void smallSort(int &smallest, int &middle, int &largest) {
	int min, max;
	
	if (middle > smallest && middle > largest) {
		max = middle;
		middle = largest;
		largest = max;
	}
	else if (smallest > largest && smallest > middle) {
		max = smallest;
		smallest = largest;
		largest = max;
	}
	if (middle < smallest && middle < largest) {
		min = middle;
		middle = smallest;
		smallest = min;
	}
	else if (largest < smallest && largest < middle) {
		min = largest;
		largest = smallest;
		smallest = min;
	}
}
/*  Test program
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int one, two, three;
	
	cout << "Please enter three integers: " << endl;
	cin >> one;
	cin >> two;
	cin >> three;
	
	smallSort(one, two, three);
	
	cout << one << "    " << two << "    " << three << endl;

	return 0;
}
*/