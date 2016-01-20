/*********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 1/18/2016
** Description: 3c - This game has the user input an integer for  user to guess.  The user is then given clues based on the logical test if the number guessed is higher or lower than the original number.  Each guess is counted.  Once the correct number has been guessed the game ends (aka the while loop is false) and the number of guesses is printed.
*********************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() 
{
	int numToGuess, guess, counter = 0;
	
	cout << "Enter the whole number for the player to guess." << endl; //Prompt to get initial number
	cin >> numToGuess;
	if (numToGuess == 0) { //To prevent the game from being won without guessing
		cout << "Please enter a non-zero whole number: " << endl;
		cin >> numToGuess;
	}

	cout << "Enter your guess: " << endl;

	while (guess != numToGuess) { //Logical test, when true then we stop iterating
		cin >> guess;
	
		if (guess > numToGuess) {
			cout << "Too high - try again." << endl;
		}
		else if(guess < numToGuess) {
			cout << "Too low - try again." << endl;
		}
		
		counter++;
	}
	
	cout << "You guessed it in " << counter << " tries." << endl; //Print the number of tries
	
	return 0;
}