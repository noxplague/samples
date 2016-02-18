#include <iostream>
#include <vector>

using namespace std;

vector <int> findMode(int data[], int size); //Prototype function
int freq1(int data[], int size);

int main() {
	
	
	int ARR_SIZE = 14;
	int test_Arr[ARR_SIZE] = {12,11,8,9,5,4,3,1,10,7,6,2,8,4}; //{3, 2, 9, 10, -3, -6, -3, 9, -45, 9, -3, 0};
	vector<int> output;
	int f1 = 0;
	int vecSize;

	output = findMode(test_Arr, ARR_SIZE);
	vecSize = output.size();
	/*
	f1 = freq1(test_Arr, ARR_SIZE);
	cout << "Frequnecy: " << f1 << endl;
	*/
	
	for (int index = 0; index < vecSize; index++) {
		std::cout << output[index] << " " << endl;
	}
	
	return 0;
}