/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 1/24/2016
** Description: 4b - smallSort is a function that takes three varialbes and then sorts them smallest to largest.  Because this done via reference varaibles the actual values in the initial variables is changed.
*********************************************************************/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/********************************************************************** 
*        smallSort                                                 	  * 
*    *
*              *
**********************************************************************/

void smallSort(int& smallest, int& middle, int& largest) {
	int smallest, middle, largest, min, max;
	
	
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