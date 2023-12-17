#include "Gameplay.h"

vector<Moving> moves;
vector<Moving> winMoves;
int _POINT[BOARD_SIZE][BOARD_SIZE];
int Moves;
int Result;

void ResetData() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        fill_n(_POINT[i], BOARD_SIZE, 0);
    }
    moves.clear();
    Moves = 0;
}

int isWin(int row_move, int col_move, int state) {
    if (state == 0) return 0;
    int row = row_move, col = col_move;
    int coordX0 = (col + 4) * 4 - 2, coordY0 = row * 2 + 8, coordXi, coordYi;
    int count, i;

    // Check column
    count = 1;
    i = row - 1;
    winMoves.push_back({ row, col, coordX0, coordY0 });
    coordXi = coordX0;
    while (i >= 0) {
        if (_POINT[i][col] != state) break;
        count++;
        coordYi = i * 2 + 8;
        winMoves.push_back({ i, col, coordXi, coordYi });
        if (count == 5) {
            return state;
        }
        i--;
    }
    i = row + 1;
    while (i <= BOARD_SIZE - 1) {
        if (_POINT[i][col] != state) break;
        count++;
        coordYi = i * 2 + 8;
        winMoves.push_back({ i, col, coordXi, coordYi });
        if (count == 5) {
            return state;
        }
        i++;
    }

    // Check row
    count = 1;
    i = col - 1;
    winMoves.clear();
    winMoves.push_back({ row, col, coordX0, coordY0 });
    coordYi = coordY0;
    while (i >= 0) {
        if (_POINT[row][i] != state) break;
        count++;
        coordXi = (i + 4) * 4 - 2;
        winMoves.push_back({ row, i, coordXi, coordYi });
        if (count == 5) {
            return state;
        }
        i--;
    }
    i = col + 1;
    while (i <= BOARD_SIZE - 1) {
        if (_POINT[row][i] != state) break;
        count++;
        coordXi = (i + 4) * 4 - 2;
        winMoves.push_back({ row, i, coordXi, coordYi });
        if (count == 5) {
            return state;
        }
        i++;
    }

    // Check diagonalm
    count = 1;
    int diag_row = row - 1, diag_col = col - 1;
    winMoves.clear();
    winMoves.push_back({ row, col, coordX0, coordY0 });
    while (diag_row >= 0 && diag_col >= 0) {
        if (_POINT[diag_row][diag_col] != state) break;
        count++;
        coordXi = (diag_col + 4) * 4 - 2;
        coordYi = diag_row * 2 + 8;
        winMoves.push_back({ diag_row, diag_col, coordXi, coordYi });
        if (count == 5) {
            return state;
        }
        diag_row--;
        diag_col--;
    }
    diag_row = row + 1; diag_col = col + 1;
    while (diag_row <= BOARD_SIZE - 1 && diag_col <= BOARD_SIZE - 1) {
        if (_POINT[diag_row][diag_col] != state) break;
        count++;
        coordXi = (diag_col + 4) * 4 - 2;
        coordYi = diag_row * 2 + 8;
        winMoves.push_back({ diag_row, diag_col, coordXi, coordYi });
        if (count == 5) {
            return state;
        }
        diag_row++;
        diag_col++;
    }

    // Check anti-diagonalm
    count = 1;
    int adiag_row = row + 1, adiag_col = col - 1;
    winMoves.clear();
    winMoves.push_back({ row, col, coordX0, coordY0 });
    while (adiag_row <= BOARD_SIZE - 1 && adiag_col >= 0) {
        if (_POINT[adiag_row][adiag_col] != state) break;
        count++;
        coordXi = (adiag_col + 4) * 4 - 2;
        coordYi = adiag_row * 2 + 8;
        winMoves.push_back({ adiag_row, adiag_col, coordXi, coordYi });
        if (count == 5) {
            return state;
        }
        adiag_row++;
        adiag_col--;
    }
    adiag_row = row - 1; adiag_col = col + 1;
    while (adiag_row >= 0 && adiag_col <= BOARD_SIZE - 1) {
        if (_POINT[adiag_row][adiag_col] != state) break;
        count++;
        coordXi = (adiag_col + 4) * 4 - 2;
        coordYi = adiag_row * 2 + 8;
        winMoves.push_back({ adiag_row, adiag_col, coordXi, coordYi });
        if (count == 5) {
            return state;
        }
        adiag_row--;
        adiag_col++;
    }
    winMoves.clear();
    return 0; // The game hasn't ended yet
}

int isDraw() {
    if (Moves == BOARD_SIZE * BOARD_SIZE) {
        return true;
    }
    return false;
}

void PVPPlay(int& result, int c) {
    result = 0;
    int b = (coord.X + 2) / 4 - 4, a = (coord.Y - 8) / 2;
    short Player = Moves % 2;//X Player

    if (Player == 0) {
        switch (c) {
        case 'w':
            if (coord.Y - 2 < 8) break;
            SetCursorPosition(coord.X, coord.Y - 2);
            GetCursorPosition();
            break;
        case 's':
            if (coord.Y + 2 > 30) break;
            SetCursorPosition(coord.X, coord.Y + 2);
            GetCursorPosition();
            break;
        case 'a':
            if (coord.X - 4 < 14) break;
            SetCursorPosition(coord.X - 4, coord.Y);
            GetCursorPosition();
            break;
        case 'd':
            if (coord.X + 4 > 59) break;
            SetCursorPosition(coord.X + 4, coord.Y);
            GetCursorPosition();
            break;
        case 32:
            if (_POINT[a][b] != 0) break;
            _POINT[a][b] = 1;
            cout << ANSI_Blue << "X" << ANSI_Black;
            Moves++;
            if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
            SetCursorPosition(coord.X, coord.Y);
            moves.push_back({ a, b, coord.X, coord.Y });
            OMark();
            if (isWin(a, b, _POINT[a][b]) == 1) result = 1;
            MoveHistory();
            break;
        case 'r':
            if (moves.size() == 0) break;
            Moving temp = moves.back();
            moves.pop_back();
            _POINT[temp.x][temp.y] = 0;
            SetCursorPosition(temp.coordX, temp.coordY);
            GetCursorPosition();
            cout << " ";
            OMark();
            Moves--;
            SetCursorPosition(temp.coordX, temp.coordY);
            MoveHistory();
            break;
        }
    }
    else {
        switch (c) {
        case 72:
            if (coord.Y - 2 < 8) break;
            SetCursorPosition(coord.X, coord.Y - 2);
            GetCursorPosition();
            break;
        case 80:
            if (coord.Y + 2 > 30) break;
            SetCursorPosition(coord.X, coord.Y + 2);
            GetCursorPosition();
            break;
        case 75:
            if (coord.X - 4 < 14) break;
            SetCursorPosition(coord.X - 4, coord.Y);
            GetCursorPosition();
            break;
        case 77:
            if (coord.X + 4 > 59) break;
            SetCursorPosition(coord.X + 4, coord.Y);
            GetCursorPosition();
            break;
        case 13:
            if (_POINT[a][b] != 0) break;
            _POINT[a][b] = 2;
            cout << ANSI_Red << "O" << ANSI_Black;
            Moves++;
            if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
            SetCursorPosition(coord.X, coord.Y);
            moves.push_back({ a, b, coord.X, coord.Y });
            XMark();
            if (isWin(a, b, _POINT[a][b]) == 2) result = 2;
            MoveHistory();
            break;
        case 'r':
            if (moves.size() == 0) break;
            Moving temp = moves.back();
            moves.pop_back();
            _POINT[temp.x][temp.y] = 0;
            SetCursorPosition(temp.coordX, temp.coordY);
            GetCursorPosition();
            cout << " ";
            XMark();
            Moves--;
            SetCursorPosition(temp.coordX, temp.coordY);
            MoveHistory();
            break;
        }
    }
}

void MoveHistory() {
    Blank(22, 35, 20, 1);
    SetCursorPosition(22, 35);
    if (moves.empty()) {
        cout << "Last Move: ...";
    }
    else {
        int x = moves.back().coordX, y = moves.back().coordY;

        if (Moves % 2 == 1) 
            cout << "Last Move: " << ANSI_Blue << "X (" << moves.back().x + 1 << ", " << moves.back().y + 1 << ")" << ANSI_Black;
        else 
            cout << "Last Move: " << ANSI_Red << "O (" << moves.back().x + 1 << ", " << moves.back().y + 1 << ")" << ANSI_Black;

        SetCursorPosition(x, y);
    }
}

void LoadHistory() {
    for (int i = 0; i < moves.size(); i++) {
        if (i % 2 == 0) 
            _POINT[moves[i].x][moves[i].y] = 1;
        else
            _POINT[moves[i].x][moves[i].y] = 2;

        int point = _POINT[moves[i].x][moves[i].y];
        switch (point)
        {
        case 1:
            SetCursorPosition(moves[i].coordX, moves[i].coordY);
            cout << ANSI_Blue << "X" << ANSI_Black;
            break;
        case 2:
            SetCursorPosition(moves[i].coordX, moves[i].coordY);
            cout << ANSI_Red << "O" << ANSI_Black;
            break;

        default:
            break;
        }
    }
}


void PreviewHistory() {
    PreviewBox();
    for (int i = 0; i < moves.size(); i++) {
        if (i % 2 == 0)
            _POINT[moves[i].x][moves[i].y] = 1;
        else
            _POINT[moves[i].x][moves[i].y] = 2;

        int point = _POINT[moves[i].x][moves[i].y];
        switch (point)
        {
        case 1:
            SetCursorPosition(63 + 2 * moves[i].y, 21 + moves[i].x);
            cout << ANSI_Blue << "X" << ANSI_Black;
            break;
        case 2:
            SetCursorPosition(63 + 2 * moves[i].y, 21 + moves[i].x);
            cout << ANSI_Red << "O" << ANSI_Black;
            break;

        default:
            break;
        }
    }
    ResetData();
}

int my_spot = 2, enemy_spot = 1;
long defensePoint[7] = { 0, 1, 9, 81, 729, 6561, 59049 };
long attackPoint[7] = { 0, 3, 24, 192, 1536, 12288, 98304 };

Moving findBestMove() {

	Moving bestMove;
	bestMove.x = 1;
	bestMove.y = 1;
	long moveMaxVal = 0;

	for (int i = 0; i < BOARD_SIZE; i++) {

		for (int j = 0; j < BOARD_SIZE; j++) {

			if (_POINT[i][j] == 0) {

				long attackVal
					= getVerticalAttackVal(i, j)
					+ getHorizontalAttackVal(i, j)
					+ getMainDiagonalAttackVal(i, j)
					+ getSemiDiagonalAttackVal(i, j);

				long defenseVal
					= getVerticalDefenseVal(i, j)
					+ getHorizontalDefenseVal(i, j)
					+ getMainDiagonalDefenseVal(i, j)
					+ getSemiDiagonalDefenseVal(i, j);

				long tempVal = max(attackVal, defenseVal);
				if (moveMaxVal < tempVal) {

					moveMaxVal = tempVal;
                    bestMove.x = i;
                    bestMove.y = j;
                    bestMove.coordX = (j + 4) * 4 - 2;
                    bestMove.coordY = i * 2 + 8;

				}
			}
		}
	}

	return bestMove;
}

long getVerticalAttackVal(int curRow, int curCol) {

	long totalVal = 0;
	int allies = 0;
	int enemies = 0;

	for (int i = 1; i < 6 && curRow + i < BOARD_SIZE; i++) {

		if (_POINT[curRow + i][curCol] == my_spot) {

			allies++;
		}
		else if (_POINT[curRow + i][curCol] == enemy_spot) {

			enemies++;
			break;
		}
		else {

			break;
		}
	}

	for (int i = 1; i < 6 && curRow - i >= 0; i++) {

		if (_POINT[curRow - i][curCol] == my_spot) {

			allies++;
		}
		else if (_POINT[curRow - i][curCol] == enemy_spot) {

			enemies++;
			break;
		}
		else {

			break;
		}
	}


	totalVal -= defensePoint[enemies];
	totalVal += attackPoint[allies];

	return totalVal;
}
long getHorizontalAttackVal(int curRow, int curCol) {

	long totalVal = 0;
	int allies = 0;
	int enemies = 0;

	for (int i = 1; i < 6 && curCol + i < BOARD_SIZE; i++) {

		if (_POINT[curRow][curCol + i] == my_spot) {

			allies++;
		}
		else if (_POINT[curRow][curCol + i] == enemy_spot) {

			enemies++;
			break;
		}
		else {

			break;
		}
	}

	for (int i = 1; i < 6 && curCol - i >= 0; i++) {

		if (_POINT[curRow][curCol - i] == my_spot) {

			allies++;
		}
		else if (_POINT[curRow][curCol - i] == enemy_spot) {

			enemies++;
			break;
		}
		else {

			break;
		}
	}


	totalVal -= defensePoint[enemies + 1];
	totalVal += attackPoint[allies];

	return totalVal;
}
long getMainDiagonalAttackVal(int curRow, int curCol) {

	long totalVal = 0;
	int allies = 0;
	int enemies = 0;

	for (int i = 1; i < 6 && curRow + i < BOARD_SIZE && curCol + i < BOARD_SIZE; i++) {

		if (_POINT[curRow + i][curCol + i] == my_spot) {

			allies++;
		}
		else if (_POINT[curRow + i][curCol + i] == enemy_spot) {

			enemies++;
			break;
		}
		else {

			break;
		}
	}

	for (int i = 1; i < 6 && curRow - i >= 0 && curCol - i >= 0; i++) {

		if (_POINT[curRow - i][curCol - i] == my_spot) {

			allies++;
		}
		else if (_POINT[curRow - i][curCol - i] == enemy_spot) {

			enemies++;
			break;
		}
		else {

			break;
		}
	}


	totalVal -= defensePoint[enemies + 1];
	totalVal += attackPoint[allies];

	return totalVal;
}
long getSemiDiagonalAttackVal(int curRow, int curCol) {

	long totalVal = 0;
	int allies = 0;
	int enemies = 0;

	for (int i = 1; i < 6 && curRow - i >= 0 && curCol + i < BOARD_SIZE; i++) {

		if (_POINT[curRow - i][curCol + i] == my_spot) {

			allies++;
		}
		else if (_POINT[curRow - i][curCol + i] == enemy_spot) {

			enemies++;
			break;
		}
		else {

			break;
		}
	}

	for (int i = 1; i < 6 && curRow + i < BOARD_SIZE && curCol - i >= 0; i++) {

		if (_POINT[curRow + i][curCol - i] == my_spot) {

			allies++;
		}
		else if (_POINT[curRow + i][curCol - i] == enemy_spot) {

			enemies++;
			break;
		}
		else {

			break;
		}
	}


	totalVal -= defensePoint[enemies + 1];
	totalVal += attackPoint[allies];

	return totalVal;
}

long getVerticalDefenseVal(int curRow, int curCol) {

	long totalVal = 0;
	int allies = 0;
	int enemies = 0;

	for (int i = 1; i < 6 && curRow + i < BOARD_SIZE; i++) {

		if (_POINT[curRow + i][curCol] == my_spot) {

			allies++;
			break;
		}
		else if (_POINT[curRow + i][curCol] == enemy_spot) {

			enemies++;
		}
		else {

			break;
		}
	}

	for (int i = 1; i < 6 && curRow - i >= 0; i++) {

		if (_POINT[curRow - i][curCol] == my_spot) {

			allies++;
			break;
		}
		else if (_POINT[curRow - i][curCol] == enemy_spot) {

			enemies++;
		}
		else {

			break;
		}
	}


	totalVal += defensePoint[enemies];
	//totalVal += attackPoint[allies];

	return totalVal;
}
long getHorizontalDefenseVal(int curRow, int curCol) {

	long totalVal = 0;
	int allies = 0;
	int enemies = 0;

	for (int i = 1; i < 6 && curCol + i < BOARD_SIZE; i++) {

		if (_POINT[curRow][curCol + i] == my_spot) {

			allies++;
			break;
		}
		else if (_POINT[curRow][curCol + i] == enemy_spot) {

			enemies++;
		}
		else {

			break;
		}
	}

	for (int i = 1; i < 6 && curCol - i >= 0; i++) {

		if (_POINT[curRow][curCol - i] == my_spot) {

			allies++;
			break;
		}
		else if (_POINT[curRow][curCol - i] == enemy_spot) {

			enemies++;
		}
		else {

			break;
		}
	}


	totalVal += defensePoint[enemies];

	return totalVal;
}
long getMainDiagonalDefenseVal(int curRow, int curCol) {

	long totalVal = 0;
	int allies = 0;
	int enemies = 0;

	for (int i = 1; i < 6 && curRow + i < BOARD_SIZE && curCol + i < BOARD_SIZE; i++) {

		if (_POINT[curRow + i][curCol + i] == my_spot) {

			allies++;
			break;
		}
		else if (_POINT[curRow + i][curCol + i] == enemy_spot) {

			enemies++;
		}
		else {

			break;
		}
	}

	for (int i = 1; i < 6 && curRow - i >= 0 && curCol - i >= 0; i++) {

		if (_POINT[curRow - i][curCol - i] == my_spot) {

			allies++;
			break;
		}
		else if (_POINT[curRow - i][curCol - i] == enemy_spot) {

			enemies++;
		}
		else {

			break;
		}
	}


	totalVal += defensePoint[enemies];

	return totalVal;
}
long getSemiDiagonalDefenseVal(int curRow, int curCol) {

	long totalVal = 0;
	int allies = 0;
	int enemies = 0;

	for (int i = 1; i < 6 && curRow - i >= 0 && curCol + i < BOARD_SIZE; i++) {

		if (_POINT[curRow - i][curCol + i] == my_spot) {

			allies++;
			break;
		}
		else if (_POINT[curRow - i][curCol + i] == enemy_spot) {

			enemies++;
		}
		else {

			break;
		}
	}

	for (int i = 1; i < 6 && curRow + i < BOARD_SIZE && curCol - i >= 0; i++) {

		if (_POINT[curRow + i][curCol - i] == my_spot) {

			allies++;
			break;
		}
		else if (_POINT[curRow + i][curCol - i] == enemy_spot) {

			enemies++;
		}
		else {

			break;
		}
	}


	totalVal += defensePoint[enemies];

	return totalVal;
}

void PVEPlay(int& result, int c) {
    result = 0;
    int b = (coord.X + 2) / 4 - 4, a = (coord.Y - 8) / 2;
    short Player = Moves % 2; //X Player

    if (Player == 0) {
        switch (c) {
        case 'w':
            if (coord.Y - 2 < 8) break;
            SetCursorPosition(coord.X, coord.Y - 2);
            GetCursorPosition();
            break;
        case 's':
            if (coord.Y + 2 > 30) break;
            SetCursorPosition(coord.X, coord.Y + 2);
            GetCursorPosition();
            break;
        case 'a':
            if (coord.X - 4 < 14) break;
            SetCursorPosition(coord.X - 4, coord.Y);
            GetCursorPosition();
            break;
        case 'd':
            if (coord.X + 4 > 59) break;
            SetCursorPosition(coord.X + 4, coord.Y);
            GetCursorPosition();
            break;
        case 32:
            if (_POINT[a][b] != 0) break;
            _POINT[a][b] = 1;
            cout << ANSI_Blue << "X" << ANSI_Black;
            Moves++;
            if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
            SetCursorPosition(coord.X, coord.Y);
            moves.push_back({ a, b, coord.X, coord.Y });
            OMark();
            if (isWin(a, b, _POINT[a][b]) == 1) {
                result = 1;
                MoveHistory();
                break;
            }

            Moving ComputerMove = findBestMove();
            _POINT[ComputerMove.x][ComputerMove.y] = 2;
            SetCursorPosition(ComputerMove.coordX, ComputerMove.coordY);
            cout << ANSI_Red << "O" << ANSI_Black;
            Moves++;
            if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
            moves.push_back({ ComputerMove.x, ComputerMove.y, ComputerMove.coordX, ComputerMove.coordY });
            XMark();
            if (isWin(ComputerMove.x, ComputerMove.y, _POINT[ComputerMove.x][ComputerMove.y]) == 2) result = 2;
            MoveHistory();


            break;
        case 'r':
            if (moves.size() == 0) break;
            Moving temp = moves.back();
            moves.pop_back();
            _POINT[temp.x][temp.y] = 0;
            SetCursorPosition(temp.coordX, temp.coordY);
            GetCursorPosition();
            cout << " ";
            OMark();
            Moves--;
            SetCursorPosition(temp.coordX, temp.coordY);
            MoveHistory();
            break;
        }
    }
}


