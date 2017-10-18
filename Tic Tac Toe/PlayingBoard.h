#pragma once

class PlayingBoard
{
public:
	int Grid;
	int mRows = 3;
	int mCols = 3;
	PlayingBoard();
	PlayingBoard getnumOfRows(int rows);
	PlayingBoard getnumOfCols(int cols);
	PlayingBoard getGrid(const int Grid);
};