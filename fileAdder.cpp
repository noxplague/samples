/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 1/18/2016
** Description: 3b - Opens a file expecting to find a list of integers, and checks for error accessing a filename.  Those integers are read by the while loop so that the file can be of any length, as each integer of the file is read it is added to the sum. The sum is written to it's own sum.txt file and the files are closed.
*********************************************************************/

#include <iostream>
#include <string>
#include <fstream>

using std::endl;
using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	string filename;
	int counter, numbers, sum;
	
	//Get the filename and open
	cout << "Please enter a filename you wish to use: " << endl;
	cin >> filename;
	inputFile.open(filename.c_str());
	
	if (inputFile) { //Process file
		while (inputFile >> numbers) { //check that the end of file hasn't been reached
			sum += numbers; //Add the current to the previous total
			counter++; 
		}
		
		//Write the sum to sum.txt
		outputFile.open("sum.txt");
		
		if (outputFile) { 
			outputFile << sum;
		}
		else { //Error opening sum.txt
			cout << "Could not access sum.txt." << endl;
		}
		
		//Close both files
		inputFile.close();
		outputFile.close();
	}
	
	else { //Error
		cout << "Could not access file." << endl;
	}
	
	return 0;
}	