/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 1/24/2016
** Description: 4a - fallDistance function takes a non-negative input and calculates the distance an object falls
*********************************************************************/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//function
double fallDistance(double time);

/********************************************************************** 
*        fallDistance                                                 * 
*  This function calculates the distance fallen based on the time in  *
*  number of seconds entered.  The function uses doubles              *
**********************************************************************/
double fallDistance(double time) {
	return 0.5 * 9.8 * (time * time);
}

//Test program

int main() {
	
	double time, distance;
	
	cout << "Please enter a time the object has fallen in seconds greater than or equal to zero: " << endl;
	cin >> time;
	
	distance = fallDistance(time);
	
	cout << "The distance fallen is " << distance << " meters." << endl;
	
	return 0;
	
}