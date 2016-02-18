/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/17/2016
** Description: 7 - A mode function for parsing an array and returning
a vector containing the modes for the array.

*********************************************************************/

#include <vector>
#include <algorithm>

using namespace std;

vector <int> findMode(int data[], int size); //Prototype function


/*****************************************************************
					findMode
This function first find the highest frequency in an array, then 
it goes through the array and checks each number against that frequency
and if it is higher or equal to the frequency adds it to the vector.
Finally it returns the sorted vector.

******************************************************************/	

vector <int> findMode(int data[], int size) {
	
	vector<int> modeVec;
	int frequency = 0;
	int numCount = 0;
	int numCount2 = 0;
	
	modeVec.clear();
	
//First lets find the highest frequency	
	for (int count = 0; count < size; count++) {
		frequency = 0;
		for (int freq = 0; freq < size; freq++){
			if (data[freq] == data[count]) 
				frequency += 1;
		}
		if (frequency > numCount2)
			numCount2 = frequency;
	}
	

//Now going through each number of the array to see if it has an equal or higher frequency
	for (int count = 0; count < size; count++) {
		frequency = 0;
		for (int freq = 0; freq < size; freq++){
			if (data[freq] == data[count]) 
				frequency += 1;
		}
		if (frequency > numCount2)
			numCount2 = frequency;
	}
	for (int count = 0; count < size; count++) {
		numCount = 0;
		for (int freq = 0; freq < size; freq++){
			if (data[count] == data[freq]) 
				numCount++;	
		}
//Adding those numbers to the vector		
		if (numCount >= numCount2) {
			modeVec.push_back(data[count]);
		}
	}
	std::sort(modeVec.begin(), modeVec.end()); //Sort the vector
	
	return modeVec;  //Return the vector
}	

//Attempts to remove the duplicate entries.

//Attempt 1
	
	/*
	int vecSize = modeVec.size();
	while (vecSize == 0) {         //***************All my logic says this While loop should work but it causes the first number to enter the vector no matter the frequency*****************
		for (int count = 0; count < size; count++) {
			numCount = 0;
			for (int freq = 0; freq < size; freq++){
				if (data[count] == data[freq]) 
					numCount++;	
			}
			if (numCount >= numCount2) 
				modeVec.push_back(data[count]);
		}
		vecSize = modeVec.size();
	}
	
	for (int count = 0; count < size; count++) {
		numCount = 0;
		for (int freq = 0; freq < size; freq++){
			if (modeVec[freq] = data[freq])
				break;
			else if (data[count] == data[freq]) 
				numCount++;	
		}
		
		if (numCount >= numCount2) {
			modeVec.push_back(data[count]);
		}
		}
		
	
//Attempt 2
	
	/*
	
	if (modeVec[freq] == data[freq])
				break;
			else 
	
	
	vecSize = modeVec.size();
	for (int count = 0; count < vecSize; count++) {
		for (int freq = 0; freq < vecSize; freq++){
			if (modeVec[freq] == modeVec[count]) 
				modeVec.erase(count);
		}
	}
	*/
			/*
			int vecSize = modeVec.size();
			if (!vecSize)
				modeVec.push_back(data[count]);
			for (int index = 0; index <= vecSize; index++) {
				if (modeVec[index] == data[count])
					break;
				else
					modeVec.push_back(data[count]);
			}
		*/
			/*else
				while (int index = 0 <= vecSize) {
					if	(modeVec[index] == data[count])
						index++;
					else
						modeVec.push_back(data[count]);
				}
			*/
		
		/*	
			int index = 0;
			do
				modeVec.push_back(data[count]);
				
			while (modeVec[index] != data[count]); //index <= modeVec.size()
			index++;
		}
		*/
		/*for (int index = 0; ; ){
				if (modeVec[index] != data[count])
		*/		
		
//Frequency calculator
		
		/*
int freq1(int data[], int size);


int freq1(int data[], int size) {
	
	int frequency = 0;
	int numCount = 0;
	int numCount2 = 0;
	
	
		for (int count = 1; count < size; count++) {
			frequency = 0;
			for (int freq = 0; freq < size; freq++){
				if (data[freq] == data[count]) 
					frequency += 1;
			}
			if (frequency > numCount2)
				numCount2 = frequency;
		
			
	
		}
	return numCount2;
}
*/
	



