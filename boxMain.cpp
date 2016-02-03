#include <iostream>
#include "Box.hpp"

using namespace std;

int main() {
	
	double userHeight, userWidth, userLength;
	Box square(userHeight, userWidth, userLength);
	
	//Test constructor
	Box box1;
	/*
	cout << "Height: " << box1.setHeight() << endl;
	cout << "Width: " << box1.setWidth() << endl;
	cout << "Length: " << box1.setLength() << endl; */
	cout << "The volume of your box is: " << box1.getVolume() << endl;
	cout << "The surface area of your box is: " << box1.getSurfaceArea() << endl;
	
	//Get user input
	cout << "Please enter positive numbers for the height, width, and length of your box: " << endl;
	cin >> userHeight >> userWidth >> userLength;

	if (userHeight < 0 || userWidth < 0 || userLength < 0) {
		cout << "You cannot have a side less than zero!" << endl;
		cin >> userHeight >> userWidth >> userLength;
	}
	else {
		//output
		/*
		square.Box(userHeight, userWidth, userLength);
		cout << "Height: " << square.Box(userHeight, userWidth, userLength) << endl;
		cout << "Width: " << square.Box(userHeight, userWidth, userLength) << endl;
		cout << "Length: " << square.Box(userHeight, userWidth, userLength) << endl;
		*/
		cout << "Height: " << square.setHeight(userHeight) << endl;
		cout << "Width: " << square.setWidth(userWidth) << endl;
		cout << "Length: " << square.setLength(userLength) << endl;
		
		cout << "The volume of your box is: " << square.getVolume() << endl;
		cout << "The surface area of your box is: " << square.getSurfaceArea() << endl;
	}
	
	return 0;
}