#include<iostream>
#include "Minesweeper.h"
void Minesweeper::startgame() {

	std::cout << "Welcome To Minesweeper ! " << std::endl;

}

Minesweeper::Minesweeper(int r, int c, int mines): rows(r),cols(c),numMines(mines) {

	boards = new char *[rows];

	for (int i = 0; i < rows; i++)
	{
		 boards[i] = new char[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			
			boards[i][j] = '.'; 

		}

	}




}


void Minesweeper::printboard() {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{

			std::cout<<boards[i][j];

		}
		std::cout << std::endl;
	}
}


