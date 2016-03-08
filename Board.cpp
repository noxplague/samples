/********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/29/2016
** Description: 9 - 
********************************************************************/

#include "Board.hpp"
#include <iostream>

using namespace std;

/*****************************************************************
					Board::Board
Default constructor
******************************************************************/	
		Board::Board() {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++)
					boardArr[i][j] = 46;
			}
		}

/*****************************************************************
					Board::Board
*******************************************************************/
		bool Board::makeMove(int row, int col, char player) {
			if (boardArr[row][col] == 46) {
				boardArr[row][col] = player;
				return true;
			}
			else
				return false;
			
		}

/*****************************************************************
					Board::Board
******************************************************************/	
		gameState Board::gameState() {
			//Counter for number of unfilled spaces, use for Draw check
			int empty = 0;
			for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (boardArr [i][j] == 46)
							empty++;
					}
			}
			//Row 1
			if (boardArr[0][0] == 'x' && boardArr[0][1] == 'x' && boardArr[0][2] == 'x')
				return X_WON;
			//Row 2
			if (boardArr[1][0] == 'x' && boardArr[1][1] == 'x' && boardArr[1][2] == 'x')
				return X_WON;
			//Row 3
			if (boardArr[2][0] == 'x' && boardArr[2][1] == 'x' && boardArr[2][2] == 'x')
				return X_WON;
			//Column 1
			if (boardArr[0][0] == 'x' && boardArr[1][0] == 'x' && boardArr[2][0] == 'x')
				return X_WON;
			//Column 2
			if (boardArr[0][1] == 'x' && boardArr[1][1] == 'x' && boardArr[2][1] == 'x')
				return X_WON;
			//Column 3
			if (boardArr[0][2] == 'x' && boardArr[1][2] == 'x' && boardArr[2][2] == 'x')
				return X_WON;
			//Diagonal left to right
			if (boardArr[0][0] == 'x' && boardArr[1][1] == 'x' && boardArr[2][2] == 'x')
				return X_WON;
			//Diagonal right to left
			if (boardArr[0][2] == 'x' && boardArr[1][1] == 'x' && boardArr[2][0] == 'x')
				return X_WON;
			//Row 1
			if (boardArr[0][0] == 'o' && boardArr[0][1] == 'o' && boardArr[0][2] == 'o')
				return O_WON;
			//Row 2
			if (boardArr[1][0] == 'o' && boardArr[1][1] == 'o' && boardArr[1][2] == 'o')
				return O_WON;
			//Row 3
			if (boardArr[2][0] == 'o' && boardArr[2][1] == 'o' && boardArr[2][2] == 'o')
				return O_WON;
			//Column 1
			if (boardArr[0][0] == 'o' && boardArr[1][0] == 'o' && boardArr[2][0] == 'o')
				return O_WON;
			//Column 2
			if (boardArr[0][1] == 'o' && boardArr[1][1] == 'o' && boardArr[2][1] == 'o')
				return O_WON;
			//Column 3
			if (boardArr[0][2] == 'o' && boardArr[1][2] == 'o' && boardArr[2][2] == 'o')
				return O_WON;
			//Diagonal left to right
			if (boardArr[0][0] == 'o' && boardArr[1][1] == 'o' && boardArr[2][2] == 'o')
				return O_WON;
			//Diagonal right to left
			if (boardArr[0][2] == 'o' && boardArr[1][1] == 'o' && boardArr[2][0] == 'o')
				return O_WON;
			//Draw
			else if (empty == 0)
				return DRAW;
			else
				return UNFINISHED;	
				
			
		
		}

/*****************************************************************
					Board::printBoard
******************************************************************/	
		void Board::printBoard() {
			cout << "   0  1  2" << endl;
			cout << "0";
				for (int j = 0; j < 3; j++)
					cout << "  " << boardArr[0][j];
			cout << endl;
			cout << "1";
				for (int j = 0; j < 3; j++)
					cout << "  " << boardArr[1][j];
			cout << endl;
			cout << "2";
				for (int j = 0; j < 3; j++)
					cout << "  " << boardArr[2][j];
			cout << endl;
		
		}