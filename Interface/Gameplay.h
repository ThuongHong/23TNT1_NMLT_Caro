#pragma once
#include "Settings.h"
#include "Graphic.h"
#include <stack>

#define BOARD_SIZE 12

struct lastMove {
    int x;
    int y;
    int coordX;
    int coordY;
};
extern stack<lastMove> last;

extern int _POINT[BOARD_SIZE][BOARD_SIZE];
extern int Moves;
extern int Result;

void ResetData();

int isEnd(int row_move, int col_move, int state);

void GameMove(int& result, int c);

void MoveHistory();

