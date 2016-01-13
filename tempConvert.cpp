#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double celsiusTemp;
	double fahrenheitTemp;
	
	cout << "Please enter a Celsius temperature" << endl;
	cin >> celsiusTemp;
	fahrenheitTemp = 1.8 * celsiusTemp + 32;
	cout << "The equivalent Fahrenheit temperature is: " << endl;
	cout << fahrenheitTemp << endl;
	
	return 0;
}