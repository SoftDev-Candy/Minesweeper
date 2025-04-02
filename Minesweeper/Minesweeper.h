#ifndef MINESWEEPER_H
#define MINESWEEPER_H


class Minesweeper {

private: int rows;
	   int cols;
	   int numMines;
	   char** boards;


public:
	void startgame();
	void printboard();
	Minesweeper(int r, int c, int mines);


};
	

#endif