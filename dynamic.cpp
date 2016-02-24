#include <iostream>
#include <cstdlib>
using namespace std;

void create_mem(int **);

int main() {
	int *i = NULL;
	
	//i = new int;
	create_mem(&i);
	*i = 5;
	
	cout << "Address of i: " << &i <<endl;
	cout << "Address of heap: " << i << endl;
	cout << "Contents of heap i: " << *i << endl;
	
	return 0;

}

void create_mem(int **m) {
	*m = new int;
}