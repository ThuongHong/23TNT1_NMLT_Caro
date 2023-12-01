#include "Gameplay.h"

stack<lastMove> last;
int _POINT[BOARD_SIZE][BOARD_SIZE];
int Moves;
int Result;

void ResetData() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        fill_n(_POINT[i], BOARD_SIZE, 0);
    }
    Moves = 0;
}

int isEnd(int row_move, int col_move, int state) {
    if (state == 0) return 0;
    int row = row_move, col = col_move;
    int count, i;

    // Check column
    count = 1;
    i = row - 1;
    while (i >= 0) {
        if (_POINT[i][col] != state) break;
        count++;
        if (count == 5) {
            return state;
        }
        i--;
    }
    i = row + 1;
    while (i <= BOARD_SIZE - 1) {
        if (_POINT[i][col] != state) break;
        count++;
        if (count == 5) {
            return state;
        }
        i++;
    }

    // Check row
    count = 1;
    i = col - 1;
    while (i >= 0) {
        if (_POINT[row][i] != state) break;
        count++;
        if (count == 5) {
            return state;
        }
        i--;
    }
    i = col + 1;
    while (i <= BOARD_SIZE - 1) {
        if (_POINT[row][i] != state) break;
        count++;
        if (count == 5) {
            return state;
        }
        i++;
    }

    // Check diagonalm
    count = 1;
    int diag_row = row - 1, diag_col = col - 1;
    while (diag_row >= 0 && diag_col >= 0) {
        if (_POINT[diag_row][diag_col] != state) break;
        count++;
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
        if (count == 5) {
            return state;
        }
        diag_row++;
        diag_col++;
    }

    // Check anti-diagonalm
    count = 1;
    int adiag_row = row + 1, adiag_col = col - 1;
    while (adiag_row <= BOARD_SIZE - 1 && adiag_col >= 0) {
        if (_POINT[adiag_row][adiag_col] != state) break;
        count++;
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
        if (count == 5) {
            return state;
        }
        adiag_row--;
        adiag_col++;
    }
    return 0; // The game hasn't ended yet
}

void GameMove(int& result, int c) {
    result = 0;
    int b = (coord.X + 2) / 4 - 4, a = (coord.Y - 8) / 2;
    static short Player = 1;//X Player

    if (Player == 1) {
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
            Player = -1;
            Moves++;
            if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
            SetCursorPosition(coord.X, coord.Y);
            last.push({ a, b, coord.X, coord.Y });
            OMark();
            if (isEnd(a, b, _POINT[a][b]) == 1) result = 1;
            break;
        case 'r':
            if (last.empty()) break;
            lastMove temp = last.top();
            last.pop();
            _POINT[temp.x][temp.y] = 0;
            SetCursorPosition(temp.coordX, temp.coordY);
            GetCursorPosition();
            cout << " ";
            OMark();
            Player = -1;
            Moves--;
            SetCursorPosition(temp.coordX, temp.coordY);
            break;
        }
    }
    else if (Player == -1) {
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
            Player = 1;
            Moves++;
            if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
            SetCursorPosition(coord.X, coord.Y);
            last.push({ a, b, coord.X, coord.Y });
            XMark();
            if (isEnd(a, b, _POINT[a][b]) == 2) result = 2;
            break;
        case 'r':
            if (last.empty()) break;
            lastMove temp = last.top();
            last.pop();
            _POINT[temp.x][temp.y] = 0;
            SetCursorPosition(temp.coordX, temp.coordY);
            GetCursorPosition();
            cout << " ";
            XMark();
            Player = 1;
            Moves--;
            SetCursorPosition(temp.coordX, temp.coordY);
            break;
        }
    }
}

void MoveHistory() {
    Blank(22, 35, 20, 1);
    SetCursorPosition(22, 35);
    if (last.empty()) {
        cout << "Last Move: ...";
    }
    else {
        int x = last.top().coordX, y = last.top().coordY;

        if (Moves % 2 == 1) 
            cout << "Last Move: " << ANSI_Blue << "X (" << last.top().x + 1 << ", " << last.top().y + 1 << ")" << ANSI_Black;
        else 
            cout << "Last Move: " << ANSI_Red << "O (" << last.top().x + 1 << ", " << last.top().y + 1 << ")" << ANSI_Black;

        SetCursorPosition(x, y);
    }
}