#include <iostream>
using namespace std;

int main()
{
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	double num4 = 0;
	double num5 = 0;
	double sum = 0;
	int denominator = 5;
	double average = 0;
	
	cout << "Please enter five numbers." << endl; 
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	
	sum = num1 + num2 +num3 + num4 + num5;
	average = sum / denominator;
	
	cout << "The average of those numbers is: \n" << average << endl;
	
	return 0;
} 
	