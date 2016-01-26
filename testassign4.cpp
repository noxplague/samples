//One program to test them all :)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

//function fallDistance
double fallDistance(double time);
	
	double time, distance;
	
	cout << "Please enter a time the object has fallen in seconds greater than or equal to zero: " << endl;
	cin >> time;
	
	distance = fallDistance(time);
	
	cout << "The distance fallen is " << distance << " meters." << endl;

//function smallSort
void smallSort(int &smallest, int &middle, int &largest);
	
	int one, two, three;
	
	cout << "Please enter three integers: " << endl;
	cin >> one;
	cin >> two;
	cin >> three;
	
	smallSort(one, two, three);
	
	cout << one << "    " << two << "    " << three << endl;
	
//function hailstone
int hailstone(int num);

	int number;

	cout << "Please enter a positive integer to calculate its hailstone count:" << endl;
	cin >> number;
	
	number = hailstone(number);
	cout << "Your hailstone value is: " << number << endl;
	
	return 0;

}