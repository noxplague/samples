/********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/29/2016
** Description: 9 - 
********************************************************************/

#include <iostream>
#include "Board.hpp"
#include "TicTacToe.hpp"

using namespace std;

int main() {
	
	char player;
	
	cout << "Welcome to TicTacToe. " << endl;
	cout << "Who will play first?  Choose X or O: " << endl;
	cin >> player;
	
	while(!(player == 'X' || player == 'x' || player == 'O' || player == 'o')) {
		cout << "Please pick a valid player.  Choose X or O: " << endl;
		cin >> player;
	}
	TicTacToe game1(player);
	game1.TicTacToe::play();
	
	return 0;
}

/*****************************************************************
					TicTacToe::TicTacToe
Constructor
******************************************************************/

TicTacToe::TicTacToe(char player) {
		if (player == 'X' || player == 'x')
			counter = 1;
		else if (player == 'O' || player == 'o')
			counter = 0;
		game = Board::Board();
	}
	
/*****************************************************************
					TicTacToe::play

******************************************************************/

void TicTacToe::play() {
		
		int coordx, coordy;
		
		game.Board::printBoard();
		cout << endl;
		
		while (game.Board::gameState() == UNFINISHED) {
			
		
			if (counter % 2 == 0) {
				player = 'o';
				cout << "Player O please enter your move: " << endl;
					cin >> coordx >> coordy;
						while (!game.Board::makeMove(coordx, coordy, player)) {
							cout << "That location is already full, please enter an empty position" << endl;
							cin >> coordx >> coordy;
						}	
				game.Board::printBoard();
			}
			else if (counter % 2 == 1) {
				player = 'x';
				cout << "Player X please enter your move: " << endl;
					cin >> coordx >> coordy;
						while (!game.Board::makeMove(coordx, coordy, player)) {
							cout << "That location is already full, please enter an empty position" << endl;
							cin >> coordx >> coordy;	
						}
				game.Board::printBoard();
			}
			counter++;
		}
		
		if (game.Board::gameState() == X_WON)
			cout << "Player X wins!" << endl;
		if (game.Board::gameState() == O_WON)
			cout << "Player O wins!" << endl;
		if (game.Board::gameState() == DRAW)
			cout << "Draw, play again." << endl;
	}
