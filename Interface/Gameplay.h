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

int isWin(int row_move, int col_move, int state);

int isDraw();

void GameMove(int& result, int c);

void MoveHistory();

void LoadHistory();


void PreviewHistory();

// PVE
extern int my_spot, enemy_spot;
extern long defensePoint[7];
extern long attackPoint[7];

Moving findBestMove();

long getVerticalAttackVal(int curRow, int curCol);
long getHorizontalAttackVal(int curRow, int curCol);
long getMainDiagonalAttackVal(int curRow, int curCol);
long getSemiDiagonalAttackVal(int curRow, int curCol);

long getVerticalDefenseVal(int curRow, int curCol);
long getHorizontalDefenseVal(int curRow, int curCol);
long getMainDiagonalDefenseVal(int curRow, int curCol);
long getSemiDiagonalDefenseVal(int curRow, int curCol);

void ComputerPlay(int& result, int c);

