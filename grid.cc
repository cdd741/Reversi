#include <iostream>
#include "grid.h"

using namespace std;

Colour whoWon(){
	size_t white;
	size_t black;
	for (size_t i = 0; i < gridLen; i++)
	{

	}
}

void Grid::init(size_t n) {
	gridLen = n * n;
	for (size_t i = 0; i < n; i++){
		for (size_t j = 0; j < n; j++){
			theGrid[i].emplace_back(Cell{ i, j });
		}
	}
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) {
			for (int p = -1; p < 2; ++p) {
				if (i == 0 && p == -1) continue;
				else if (i == n && p == 1) continue;
				else{
					for (int q = -1; p < 2; ++q) {
						if (j == 0 && q == -1) continue;
						else if (j == n && q == 1) continue;
						else if (p == 0 && q == 0) continue;
						else theGrid[i][j].attach(&theGrid[p][q]);
					}
				}
			}
		}
	}
}

void Grid::setPiece(size_t r, size_t c, Colour colour) {
	theGrid[r][c].setPiece(colour);
	theGrid[r][c].notifyObservers();
}
