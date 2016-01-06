/****************************************************
 ** Author: Andrew ODonald
 ** Date: 1/4/2016
 ** Description: Module 1 assignment, a favorite animal input/output
*****************************************************/

#include <iostream>
#include <string>

//a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." <<std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}

