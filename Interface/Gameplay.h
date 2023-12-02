#pragma once
#include "Settings.h"
#include "Graphic.h"
#include <vector>

#define BOARD_SIZE 12

struct Moving {
    int x;
    int y;
    int coordX;
    int coordY;
};
extern vector<Moving> moves;
extern vector<Moving> winMoves;

extern int _POINT[BOARD_SIZE][BOARD_SIZE];
extern int Moves;
extern int Result;

void ResetData();

int isEnd(int row_move, int col_move, int coordX, int coordY, int state);

void GameMove(int& result, int c);

void MoveHistory();

void LoadHistory();

