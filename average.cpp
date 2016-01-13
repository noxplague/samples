#include <iostream>
using namespace std;

int main()
{
	double num1;
	double num2;
	double num3;
	double num4;
	double num5;
	double sum;
	int denominator = 5;
	double average;
	
	cout << "Please enter five numbers." << endl; 
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	
	sum = num1 + num2 + num3 + num4 + num5;
	average = sum / denominator;
	
	cout << "The average of those numbers is: \n" << average << endl;
	
	return 0;
} 
	