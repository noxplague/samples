
#include <string>
#include <iostream>

using namespace std;

int main () {


string str = "crockpot of ontological orthodoxy";
    string output = "";
    int counter = 1;
    while (str.at(counter) != 'o')
    {
        output += str.at(counter);
        counter += 3;
    }
    cout << output << endl;
    
}