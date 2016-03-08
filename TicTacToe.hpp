/********************************************************************
** Author: Andrew ODonald
** ONID: odonalda
** Date: 2/29/2016
** Description: 9 - 
********************************************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"

class TicTacToe {
	private:
		Board game;
		int counter;
		char player;
		
	public:
		TicTacToe(char player);
		void play();
		
};

#endif