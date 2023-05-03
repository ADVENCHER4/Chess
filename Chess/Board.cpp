#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Cell.h"
#include "Constants.h"

Board::Board()
{
	board = new Cell * [8];
	for (int i = 0; i < 8; i++)
	{
		board[i] = new Cell[8];
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 != 0)
			{
				board[i][j] = Cell(BLACK);
			}
			else
			{
				board[i][j] = Cell(WHITE);
			}
		}
	}
}

Cell** Board::getBoard()
{
	return board;
}