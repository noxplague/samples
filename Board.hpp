/********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/29/2016
** Description: 9 - 
********************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

enum gameState { X_WON, O_WON, DRAW, UNFINISHED };

class Board {
	
	private:
		char boardArr[3][3];
	
	public:
		Board(); //Default constructor
		bool makeMove(int row, int col, char player);
		gameState gameState();
		void printBoard();
};
		
#endif	