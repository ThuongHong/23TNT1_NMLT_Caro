#include "Graphic.h"

// Ham chinh mau cho 1 pixel
void setColor(int b_color, int t_color) {
    int color_code = b_color * 16 + t_color;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_code);
}

// Chu X giao dien menu
void MenuX() {
    for (int i = 22; i <= 24; i++) // line 1 --> 3
    {
        SetCursorPosition(29, i);
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "...";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "..";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "...";
        setColor(12, 12); cout << ".";
    }
    for (int i = 25; i <= 26; i++) // line 4,5
    {
        SetCursorPosition(29, i);
        setColor(15, 15); cout << "..";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "......";
        setColor(12, 12); cout << ".";
    }
    for (int i = 27; i <= 28; i++) // line 6,7
    {
        SetCursorPosition(29, i);
        setColor(15, 15); cout << "....";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
    }
    for (int i = 29; i <= 30; i++) // line 8,9
    {
        SetCursorPosition(29, i);
        setColor(15, 15); cout << "..";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "......";
        setColor(12, 12); cout << ".";
    }
    for (int i = 31; i <= 33; i++) // line 10 --> 12
    {
        SetCursorPosition(29, i);
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "...";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "..";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "...";
        setColor(12, 12); cout << ".";
    }
    cout << ANSI_Black;
}

// Chu O giao dien menu
void MenuO() {
    SetCursorPosition(106, 22); // row 1
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    SetCursorPosition(106, 23); // row 2
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    for (int i = 24; i <= 31; i++) // row 3 -> 10
    {
        SetCursorPosition(106, i);
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "....";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
    }
    SetCursorPosition(106, 32); // row 11
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    SetCursorPosition(106, 33); // row 12
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";

    cout << ANSI_Black;
}

// Ham ve chu LOAD GAME
void LoadGame()
{
    SetCursorPosition(21, 2); // row 1
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".......";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "......";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 3); // row 2
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 4); // row 3
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 5); // row 4
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 6); // row 5
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".......";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 7); // row 6
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".......";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 8); // row 7
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 9); // row 8
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 10); // row 9
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(21, 11); // row 10
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15);

    cout << ANSI_Black;
}

// Ham ve chu SETTINGS
void Settings()
{
    SetCursorPosition(22, 2); // row 1
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(22, 3); // row 2
    for (int i = 0; i < 5; i++)
    {
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..........";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
    }
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    for (int i = 0; i < 2; i++)
    {
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..........";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
    }

    SetCursorPosition(22, 4); // row 3
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".............";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(22, 5); // row 4
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".............";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(22, 6); // row 5
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(22, 7); // row 6
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(22, 8); // row 7
    setColor(15, 15); cout << "........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".............";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(22, 9); // row 8
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".............";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(22, 10); // row 9
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(22, 11); // row 10
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15);

    cout << ANSI_Black;
}

// Ham ve chu ABOUT
void About()
{
    SetCursorPosition(42, 2); // row 1
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 3); // row 2
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 4); // row 3
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 5); // row 4
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 6); // row 5
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 7); // row 6
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 8); // row 7
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 9); // row 8
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 10); // row 9
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";

    SetCursorPosition(42, 11); // row 10
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << ".........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "......";
    setColor(11, 11); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15);

    cout << ANSI_Black;
}

// Ham ve chu HELP
void Help()
{
    for (int i = 3; i <= 4; i++)
    {
        SetCursorPosition(48, i); // row 1, 2
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "....";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..........";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".........";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..........";
        setColor(12, 12); cout << ".";
    }
    for (int i = 5; i <= 6; i++)
    {
        SetCursorPosition(48, i); // row 3, 4
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "....";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".........";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".........";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "....";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
    }
    for (int i = 7; i <= 8; i++)
    {
        SetCursorPosition(48, i); // row 5, 6
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..........";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << ".......";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "....";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".........";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..........";
        setColor(12, 12); cout << ".";
    }
    for (int i = 9; i <= 10; i++)
    {
        SetCursorPosition(48, i); // row 7, 8
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "....";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".........";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".........";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
    }
    for (int i = 11; i <= 12; i++)
    {
        SetCursorPosition(48, i); // row 9, 10
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << "....";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..........";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..........";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(11, 11); cout << ".";
        setColor(0, 0); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15);
    }

    cout << ANSI_Black;
}

// Ham ve hieu ung X thang
void XWin() {
    SetCursorPosition(94, 10); // row 1
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";

    // Line 2
    SetCursorPosition(94, 11);
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";

    // Line 3
    SetCursorPosition(94, 12);
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "...";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";

    // Line 4
    SetCursorPosition(94, 13);
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "...";
    setColor(15, 15); cout << "....";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";

    // Line 5
    SetCursorPosition(94, 14);
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";

    // Line 6
    SetCursorPosition(94, 15);
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "...";
    setColor(15, 15); cout << "....";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "...";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";

    // Line 7
    SetCursorPosition(94, 16);
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << ".........";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";

    // Line 8
    SetCursorPosition(94, 17);
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "....";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";

    // Line 9
    SetCursorPosition(94, 18);
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";
    setColor(15, 15); cout << "....";
    setColor(1, 1); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";

    // Line 12
    SetCursorPosition(94, 19);
    setColor(15, 15);
    for (int i = 0; i < 34; i++)
        cout << ".";

    // Line 13
    SetCursorPosition(94, 20);
    setColor(15, 15); cout << "...";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << "...........";
    setColor(15, 15); cout << "............";

    // Line 14
    SetCursorPosition(94, 21);
    setColor(15, 15); cout << "..";
    setColor(6, 6); cout << "...";
    setColor(15, 15); cout << "....";
    setColor(0, 0); cout << "...";
    setColor(14, 14); cout << "....";
    setColor(6, 6); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(15, 15); cout << "..........";

    // Line 15
    SetCursorPosition(94, 22);
    setColor(15, 15); cout << "...";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << "....";

    // Line 16
    SetCursorPosition(94, 23);
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(6, 6); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(6, 6); cout << "...";
    setColor(15, 15); cout << "...";

    // Line 17
    SetCursorPosition(94, 24);
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << "....";

    // Line 18
    SetCursorPosition(94, 25);
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << "..";
    setColor(6, 6); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "........";

    // Line 19
    SetCursorPosition(94, 26);
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << "..";
    setColor(0, 0); cout << "..";
    setColor(14, 14); cout << "...";
    setColor(6, 6); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "........";


    // Line 20
    SetCursorPosition(94, 27);
    setColor(15, 15); cout << "........";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(14, 14); cout << "...";
    setColor(6, 6); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".........";

    // Line 21
    SetCursorPosition(94, 28);
    setColor(15, 15); cout << ".........";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(14, 14); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "..........";

    // Line 22
    SetCursorPosition(94, 29);
    setColor(15, 15); cout << "..........";
    setColor(0, 0); cout << ".............";
    setColor(15, 15); cout << "...........";

    // Line 23
    SetCursorPosition(94, 30);
    setColor(15, 15); cout << "....";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".......";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".......";

    // Line 24
    SetCursorPosition(94, 31);
    setColor(15, 15); cout << "...";
    setColor(6, 6); cout << "...";
    setColor(15, 15); cout << "........";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "......";
    setColor(6, 6); cout << "...";
    setColor(15, 15); cout << "......";

    // Line 25
    SetCursorPosition(94, 32);
    setColor(15, 15); cout << "....";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".......";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".......";

    // Line 26
    SetCursorPosition(94, 33);
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << "...........";
    setColor(15, 15); cout << "............";

    // Line 27
    SetCursorPosition(94, 34);
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << "....";
    setColor(6, 6); cout << "...";
    setColor(12, 12); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "............";

    // Line 28
    SetCursorPosition(94, 35);
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << "...........";
    setColor(15, 15); cout << "............";

    cout << ANSI_Black;
}

// Ham ve hieu ung O thang
void OWin() 
{
    // Line 1
    SetCursorPosition(94, 10);
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << ".....";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";

    // Line 2
    SetCursorPosition(94, 11);
    setColor(4, 4); cout << ".......";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";

    // Line 3
    SetCursorPosition(94, 12);
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "...";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";

    // Line 4
    SetCursorPosition(94, 13);
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";

    // Line 5
    SetCursorPosition(94, 14);
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";

    // Line 6
    SetCursorPosition(94, 15);
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "...";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";

    // Line 7
    SetCursorPosition(94, 16);
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << ".........";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";

    // Line 8
    SetCursorPosition(94, 17);
    setColor(4, 4); cout << ".......";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";

    // Line 9
    SetCursorPosition(94, 18);
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << ".....";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "..";

    // Line 12
    SetCursorPosition(94, 19);
    setColor(15, 15);
    for (int i = 0; i < 34; i++)
        cout << ".";

    // Line 13
    SetCursorPosition(94, 20);
    setColor(15, 15); cout << "...";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << "...........";
    setColor(15, 15); cout << "............";

    // Line 14
    SetCursorPosition(94, 21);
    setColor(15, 15); cout << "..";
    setColor(6, 6); cout << "...";
    setColor(15, 15); cout << "....";
    setColor(0, 0); cout << "...";
    setColor(14, 14); cout << "....";
    setColor(6, 6); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "...";
    setColor(15, 15); cout << "..........";

    // Line 15
    SetCursorPosition(94, 22);
    setColor(15, 15); cout << "...";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << "....";

    // Line 16
    SetCursorPosition(94, 23);
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(6, 6); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(6, 6); cout << "...";
    setColor(15, 15); cout << "...";

    // Line 17
    SetCursorPosition(94, 24);
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << "....";

    // Line 18
    SetCursorPosition(94, 25);
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << "..";
    setColor(6, 6); cout << "......";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "........";

    // Line 19
    SetCursorPosition(94, 26);
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << "..";
    setColor(0, 0); cout << "..";
    setColor(14, 14); cout << "...";
    setColor(6, 6); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "........";


    // Line 20
    SetCursorPosition(94, 27);
    setColor(15, 15); cout << "........";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(14, 14); cout << "...";
    setColor(6, 6); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".........";

    // Line 21
    SetCursorPosition(94, 28);
    setColor(15, 15); cout << ".........";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(14, 14); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "..........";

    // Line 22
    SetCursorPosition(94, 29);
    setColor(15, 15); cout << "..........";
    setColor(0, 0); cout << ".............";
    setColor(15, 15); cout << "...........";

    // Line 23
    SetCursorPosition(94, 30);
    setColor(15, 15); cout << "....";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".......";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".......";

    // Line 24
    SetCursorPosition(94, 31);
    setColor(15, 15); cout << "...";
    setColor(6, 6); cout << "...";
    setColor(15, 15); cout << "........";
    setColor(0, 0); cout << ".";
    setColor(6, 6); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "......";
    setColor(6, 6); cout << "...";
    setColor(15, 15); cout << "......";

    // Line 25
    SetCursorPosition(94, 32);
    setColor(15, 15); cout << "....";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".......";
    setColor(6, 6); cout << ".";
    setColor(15, 15); cout << ".......";

    // Line 26
    SetCursorPosition(94, 33);
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << "...........";
    setColor(15, 15); cout << "............";

    // Line 27
    SetCursorPosition(94, 34);
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << "....";
    setColor(6, 6); cout << "...";
    setColor(12, 12); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << "............";

    // Line 28
    SetCursorPosition(94, 35);
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << "...........";
    setColor(15, 15); cout << "............";

    cout << ANSI_Black;
}

// Ham ve hieu ung hoa
void DrawEffect()
{
    SetCursorPosition(84, 6); // row 1
    setColor(4, 4); cout << ".......";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(1, 1); cout << ".......";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(4, 4); cout << "......";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    for (int i = 0; i < 3; i++)
    {
        setColor(1, 1); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
    }
    SetCursorPosition(84, 7); // row 2
    setColor(4, 4); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << ".........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << ".......";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    for (int i = 0; i < 3; i++)
    {
        setColor(1, 1); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
    }
    SetCursorPosition(84, 8); // row 3
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(1, 1); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    for (int i = 0; i < 3; i++)
    {
        setColor(1, 1); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
    }
    SetCursorPosition(84, 9); // row 4
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(1, 1); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    for (int i = 0; i < 3; i++)
    {
        setColor(1, 1); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
    }
    SetCursorPosition(84, 10); // row 5
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << ".........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    for (int i = 0; i < 3; i++)
    {
        setColor(1, 1); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
    }
    SetCursorPosition(84, 11); // row 6
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << ".........";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << ".........";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    for (int i = 0; i < 3; i++)
    {
        setColor(1, 1); cout << "..";
        setColor(12, 12); cout << ".";
        setColor(15, 15); cout << ".";
    }
    SetCursorPosition(84, 12); // row 7
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(1, 1); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..........";
    setColor(12, 12); cout << ".";
    SetCursorPosition(84, 13); // row 8
    setColor(4, 4); cout << "........";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "..........";
    setColor(12, 12); cout << ".";
    SetCursorPosition(84, 14); // row 9
    setColor(4, 4); cout << ".......";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(1, 1); cout << "..";
    setColor(12, 12); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(1, 1); cout << "..";
    setColor(12, 12); cout << ".";
    SetCursorPosition(84, 16); // row 10
    setColor(15, 15); cout << "...................";
    setColor(0, 0); cout << "......";
    SetCursorPosition(84, 17); // row 11
    setColor(15, 15); cout << ".................";
    setColor(0, 0); cout << "..";
    setColor(2, 2); cout << ".";
    setColor(10, 10); cout << "....";
    setColor(2, 2); cout << ".";
    setColor(0, 0); cout << "..";
    SetCursorPosition(84, 18); // row 12
    setColor(15, 15); cout << "...............";
    setColor(0, 0); cout << "..";
    setColor(2, 2); cout << ".";
    setColor(10, 10); cout << "........";
    setColor(2, 2); cout << ".";
    setColor(0, 0); cout << "..";
    SetCursorPosition(84, 19); // row 13
    setColor(15, 15); cout << "..............";
    setColor(0, 0); cout << ".";
    setColor(2, 2); cout << ".";
    setColor(10, 10); cout << "..........";
    setColor(2, 2); cout << ".";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 20); // row 14
    setColor(15, 15); cout << ".............";
    setColor(0, 0); cout << ".";
    setColor(2, 2); cout << "..";
    setColor(10, 10); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(4, 4); cout << ".";
    setColor(10, 10); cout << "......";
    setColor(15, 15); cout << ".";
    setColor(1, 1); cout << ".";
    setColor(10, 10); cout << ".";
    setColor(2, 2); cout << "..";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 21); // row 15
    setColor(15, 15); cout << "..............";
    setColor(0, 0); cout << ".";
    setColor(10, 10); cout << "..";
    setColor(4, 4); cout << "..";
    setColor(10, 10); cout << "......";
    setColor(1, 1); cout << "..";
    setColor(10, 10); cout << "..";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 22); // row 16
    setColor(15, 15); cout << ".............";
    setColor(0, 0); cout << "..";
    setColor(10, 10); cout << "......";
    setColor(15, 15); cout << ".";
    setColor(13, 13); cout << ".";
    setColor(10, 10); cout << "......";
    setColor(0, 0); cout << "..";
    SetCursorPosition(84, 23); // row 17
    setColor(15, 15); cout << "............";
    setColor(0, 0); cout << ".";
    setColor(2, 2); cout << ".";
    setColor(10, 10); cout << ".......";
    setColor(13, 13); cout << "..";
    setColor(10, 10); cout << ".......";
    setColor(2, 2); cout << ".";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 24); // row 18
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << ".";
    setColor(2, 2); cout << ".";
    setColor(10, 10); cout << ".....";
    setColor(0, 0); cout << "..";
    setColor(10, 10); cout << "....";
    setColor(0, 0); cout << "..";
    setColor(10, 10); cout << ".....";
    setColor(2, 2); cout << ".";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 25); // row 19
    setColor(15, 15); cout << "............";
    setColor(0, 0); cout << ".";
    setColor(2, 2); cout << ".";
    setColor(10, 10); cout << "...";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(10, 10); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "..";
    setColor(10, 10); cout << "...";
    setColor(2, 2); cout << ".";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 26); // row 20
    setColor(15, 15); cout << ".............";
    setColor(0, 0); cout << ".";
    setColor(10, 10); cout << "....";
    setColor(0, 0); cout << "..";
    setColor(10, 10); cout << "....";
    setColor(0, 0); cout << "..";
    setColor(10, 10); cout << "....";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 27); // row 21
    setColor(15, 15); cout << "............";
    setColor(0, 0); cout << "..";
    setColor(10, 10); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(6, 6); cout << ".";
    setColor(10, 10); cout << "..........";
    setColor(15, 15); cout << ".";
    setColor(9, 9); cout << ".";
    setColor(10, 10); cout << ".";
    setColor(0, 0); cout << "..";
    SetCursorPosition(84, 28); // row 22
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << ".";
    setColor(2, 2); cout << ".";
    setColor(10, 10); cout << "..";
    setColor(6, 6); cout << "..";
    setColor(10, 10); cout << "..";
    setColor(0, 0); cout << ".";
    setColor(10, 10); cout << "....";
    setColor(0, 0); cout << ".";
    setColor(10, 10); cout << "..";
    setColor(9, 9); cout << "..";
    setColor(10, 10); cout << "..";
    setColor(2, 2); cout << ".";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 29); // row 23
    setColor(15, 15); cout << "..........";
    setColor(2, 2); cout << ".........";
    setColor(0, 0); cout << "....";
    setColor(2, 2); cout << ".........";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 30); // row 24
    setColor(15, 15); cout << "...........";
    setColor(0, 0); cout << ".....";
    setColor(2, 2); cout << "............";
    setColor(0, 0); cout << ".....";
    SetCursorPosition(84, 31); // row 25
    setColor(15, 15); cout << ".................";
    setColor(0, 0); cout << "............";
    SetCursorPosition(84, 32); // row 26
    setColor(15, 15); cout << ".................";
    setColor(0, 0); cout << ".";
    setColor(14, 14); cout << "..........";
    setColor(0, 0); cout << ".";
    SetCursorPosition(84, 33); // row 27
    setColor(15, 15); cout << ".................";
    setColor(0, 0); cout << "............";
    setColor(15, 15);
    cout << ANSI_Black;
 }

// Ham ve tay cam do choi va menu
void GameTitle()
{
    SetCursorPosition(27, 2); // row 1
    setColor(15, 15); for (int i = 0; i < 7; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); for (int i = 0; i < 12; i++) cout << ".";
    setColor(0, 0); for (int i = 0; i < 10; i++) cout << ".";
    setColor(15, 15); cout << "......";
    setColor(0, 0); for (int i = 0; i < 9; i++) cout << ".";
    setColor(15, 15); cout << "....";
    setColor(0, 0); for (int i = 0; i < 8; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(0, 0); cout << ".......";
    setColor(4, 4); cout << ".";
    setColor(15, 15); for (int i = 0; i < 12; i++) cout << ".";
    setColor(4, 4); cout << "...";

    SetCursorPosition(27, 3); // row 2
    setColor(15, 15); cout << "......";
    setColor(4, 4); cout << "...";
    setColor(15, 15); for (int i = 0; i < 9; i++) cout << ".";
    setColor(0, 0); for (int i = 0; i < 12; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); for (int i = 0; i < 11; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); for (int i = 0; i < 12; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); for (int i = 0; i < 12; i++) cout << ".";
    setColor(15, 15); for (int i = 0; i < 9; i++) cout << ".";
    setColor(4, 4); cout << ".....";

    SetCursorPosition(27, 4); // row 3
    setColor(15, 15); cout << ".....";
    setColor(4, 4); cout << ".....";
    setColor(15, 15); cout << "........";
    setColor(0, 0); cout << ".....";
    setColor(4, 4); cout << "....";
    setColor(0, 0); cout << "...";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << ".....";
    setColor(4, 4); cout << "....";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << "....";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << "....";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(4, 4); for (int i = 0; i < 11; i++) cout << ".";

    SetCursorPosition(27, 5); // row 4
    setColor(15, 15); cout << "....";
    setColor(14, 14); cout << ".......";
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << "...";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "...";
    for (int i = 0; i < 2; i++)
    {
        setColor(0, 0); cout << "....";
        setColor(4, 4); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(0, 0); cout << "....";
        setColor(4, 4); cout << ".";
        setColor(15, 15); cout << "...";
    }
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "......";
    setColor(11, 11); cout << ".........";

    SetCursorPosition(27, 6); // row 5
    setColor(15, 15); cout << "....";
    setColor(14, 14); cout << "..";
    setColor(11, 11); cout << "...";
    setColor(14, 14); cout << "..";
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "....";
    for (int i = 0; i < 2; i++)
    {
        setColor(0, 0); cout << "....";
        setColor(4, 4); cout << ".";
        setColor(15, 15); cout << ".";
        setColor(0, 0); cout << "....";
        setColor(4, 4); cout << ".";
        setColor(15, 15); cout << "...";
    }
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "......";
    setColor(11, 11); cout << "..";
    setColor(14, 14); cout << ".....";
    setColor(11, 11); cout << "..";

    SetCursorPosition(27, 7); // row 6
    setColor(15, 15); cout << "....";
    setColor(14, 14); cout << "..";
    setColor(11, 11); cout << "...";
    setColor(14, 14); cout << "..";
    setColor(15, 15); cout << ".......";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(0, 0); for (int i = 0; i < 13; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); for (int i = 0; i < 12; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "......";
    setColor(11, 11); cout << ".........";

    SetCursorPosition(27, 8); // row 7
    setColor(15, 15); cout << "...";
    setColor(11, 11); cout << ".";
    setColor(14, 14); cout << ".......";
    setColor(11, 11); cout << ".";
    setColor(15, 15); cout << "......";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(0, 0); for (int i = 0; i < 13; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); for (int i = 0; i < 10; i++) cout << ".";
    setColor(4, 4); cout << "...";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".....";
    setColor(4, 4); cout << ".";
    setColor(11, 11); cout << "..";
    setColor(14, 14); cout << ".....";
    setColor(11, 11); cout << "..";
    setColor(4, 4); cout << ".";

    SetCursorPosition(27, 9); // row 8
    setColor(15, 15); cout << "..";
    setColor(11, 11); cout << "..";
    setColor(14, 14); cout << "..";
    setColor(11, 11); cout << "...";
    setColor(14, 14); cout << "..";
    setColor(11, 11); cout << "..";
    setColor(15, 15); cout << ".....";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".........";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".....";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << "...";
    setColor(0, 0); cout << "...";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << "..";
    setColor(11, 11); cout << "..";
    setColor(14, 14); cout << ".....";
    setColor(11, 11); cout << "..";
    setColor(4, 4); cout << "..";

    SetCursorPosition(27, 10); // row 9
    setColor(15, 15); cout << ".";
    setColor(11, 11); cout << "...";
    setColor(14, 14); cout << ".......";
    setColor(11, 11); cout << "...";
    setColor(15, 15); cout << "....";
    setColor(0, 0); cout << ".....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "...";
    setColor(15, 15); cout << "..";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "....";
    setColor(15, 15); cout << "..";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "...";
    setColor(11, 11); cout << ".........";
    setColor(4, 4); cout << "...";

    SetCursorPosition(27, 11); // row 10
    setColor(11, 11); cout << "....";
    setColor(12, 12); cout << ".";
    setColor(4, 4); cout << ".....";
    setColor(12, 12); cout << ".";
    setColor(11, 11); cout << "....";
    setColor(15, 15); cout << "...";
    setColor(0, 0); for (int i = 0; i < 12; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); for (int i = 0; i < 12; i++) cout << ".";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "..";
    setColor(15, 15); cout << "..";
    setColor(14, 14); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(4, 4); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "..";

    SetCursorPosition(27, 12); // row 11
    setColor(15, 15); cout << "....";
    setColor(14, 14); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(4, 4); cout << "...";
    setColor(12, 12); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(15, 15); cout << "........";
    setColor(4, 4); cout << ".";
    setColor(0, 0); cout << "..........";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << ".";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "...";
    setColor(0, 0); cout << "....";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << ".";
    setColor(0, 0); cout << ".......";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(14, 14); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(4, 4); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(15, 15); cout << "....";
    setColor(4, 4); cout << ".";

    SetCursorPosition(27, 13); // row 12
    setColor(15, 15); cout << ".....";
    setColor(14, 14); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(4, 4); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(15, 15); cout << "...........";
    setColor(4, 4); cout << ".........";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << ".....";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << "..";
    setColor(4, 4); cout << "....";
    setColor(15, 15); cout << ".....";
    setColor(4, 4); cout << "...";
    setColor(15, 15); cout << "...";
    setColor(4, 4); cout << "........";
    setColor(15, 15); cout << "............";
    setColor(14, 14); cout << ".";
    setColor(12, 12); cout << ".";
    setColor(14, 14); cout << ".";
    setColor(15, 15);
    cout << ANSI_Black;
    SetCursorPosition(38, 17);
    cout << "Press \u001b[32mUp\u001B[30m and \u001b[32mDown\u001B[30m arrow to navigate, \u001b[32mEnter\u001B[30m to select and \u001b[32mEsc\u001B[30m to go back" << endl;
}

// Ve not nhac
void MusicNote() {
    //Line 1
    SetCursorPosition(100, 15);
    for (int i = 1;i <= 7;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 2 3 4 5
    for (int j = 1;j <= 4;j++) {
        SetCursorPosition(100, 15 + j);
        for (int i = 1;i <= 7;i++) cout << "  ";
        for (int i = 1;i <= j;i++) printf("%c%c", 219, 219);
    }

    //Line 6 7 8
    for (int j = 1;j <= 3;j++) {
        SetCursorPosition(100, 19 + j);
        for (int i = 1;i <= 7;i++) cout << "  ";
        printf("%c%c", 219, 219);
        for (int i = 1;i <= j;i++) cout << "  ";
        for (int i = 4 - j;i >= 1;i--) printf("%c%c", 219, 219);
    }

    //Line 9
    SetCursorPosition(100, 23);
    for (int i = 1;i <= 7;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 3;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 10 11
    for (int j = 1;j <= 2;j++) {
        SetCursorPosition(100, 23+j);
        for (int i = 1;i <= 7;i++) cout << "  ";
        printf("%c%c", 219, 219);
        for (int i = 1;i <= 3-j;i++) cout << "  ";
        printf("%c%c%c%c", 219, 219, 219, 219);
    }

    //Line 12
    SetCursorPosition(100, 26);
    for (int j = 1;j <= 4;j++) cout << "  ";
    printf("%c%c%c%c", 219, 219, 219, 219);
    cout << "  ";
    printf("%c%c", 219, 219);
    cout << "  ";
    printf("%c%c", 219, 219);

    //Line 13
    SetCursorPosition(100, 27);
    for (int j = 1;j <= 3;j++) cout << "  ";
    for (int i = 1;i <= 5;i++) printf("%c%c", 219, 219);

    //Line 14
    SetCursorPosition(100, 28);
    for (int j = 1;j <= 2;j++) cout << "  ";
    for (int i = 1;i <= 6;i++) printf("%c%c", 219, 219);

    //Line 15
    SetCursorPosition(100, 29);
    for (int j = 1;j <= 2;j++) cout << "  ";
    for (int i = 1;i <= 5;i++) printf("%c%c", 219, 219);

    //Line 16
    SetCursorPosition(100, 30);
    for (int j = 1;j <= 3;j++) cout << "  ";
    for (int i = 1;i <= 3;i++) printf("%c%c", 219, 219);
}

// Ve Sound Effect
void SoundEffect() {
    //Line 1
    SetCursorPosition(17, 15);
    for (int i = 1;i <= 7;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 4;i++) cout << "  ";
    for (int i = 1;i <= 2;i++) printf("%c%c", 219, 219);

    //Line 2
    SetCursorPosition(17, 16);
    for (int i = 1;i <= 6;i++) cout << "  ";
    for (int i = 1;i <= 2;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 6;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 3
    SetCursorPosition(17, 17);
    for (int i = 1;i <= 5;i++) cout << "  ";
    for (int i = 1;i <= 3;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 2;i++) cout << "  ";
    for (int i = 1;i <= 2;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 3;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 4
    SetCursorPosition(17, 18);
    for (int i = 1;i <= 4;i++) cout << "  ";
    for (int i = 1;i <= 4;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 4;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 2;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 5
    SetCursorPosition(17, 19);
    for (int i = 1;i <= 3;i++) cout << "  ";
    for (int i = 1;i <= 5;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 4;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 3;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 6
    SetCursorPosition(17, 20);
    for (int i = 1;i <= 8;i++) printf("%c%c", 219, 219);
    cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 3;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 2;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 7 8 9 10
    for (int i = 1;i <= 4;i++) {
        SetCursorPosition(17, 20 + i);
        for (int j = 1;j <= 8;j++)printf("%c%c", 219, 219);
        for (int i = 1;i <= 2;i++) cout << "  ";
        printf("%c%c", 219, 219);
        for (int i = 1;i <= 2;i++) cout << "  ";
        printf("%c%c", 219, 219);
        for (int i = 1;i <= 2;i++) cout << "  ";
        printf("%c%c", 219, 219);
    }

    //Line 11
    SetCursorPosition(17, 25);
    for (int i = 1;i <= 8;i++) printf("%c%c", 219, 219);
    cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 3;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 2;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 12
    SetCursorPosition(17, 26);
    for (int i = 1;i <= 3;i++) cout << "  ";
    for (int i = 1;i <= 5;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 4;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 3;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 13
    SetCursorPosition(17, 27);
    for (int i = 1;i <= 4;i++) cout << "  ";
    for (int i = 1;i <= 4;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 4;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 2;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 14
    SetCursorPosition(17, 28);
    for (int i = 1;i <= 5;i++) cout << "  ";
    for (int i = 1;i <= 3;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 2;i++) cout << "  ";
    for (int i = 1;i <= 2;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 3;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 15
    SetCursorPosition(17, 29);
    for (int i = 1;i <= 6;i++) cout << "  ";
    for (int i = 1;i <= 2;i++) printf("%c%c", 219, 219);
    for (int i = 1;i <= 6;i++) cout << "  ";
    printf("%c%c", 219, 219);

    //Line 16
    SetCursorPosition(17, 30);
    for (int i = 1;i <= 7;i++) cout << "  ";
    printf("%c%c", 219, 219);
    for (int i = 1;i <= 4;i++) cout << "  ";
    for (int i = 1;i <= 2;i++) printf("%c%c", 219, 219);
}

// Ve thanh tai tien do
void Loading() {
    //L
        //Line 1
    SetCursorPosition(50, 10);
    printf("%c%c%c", 219, 219, 187);
        //Line 2 3 4
    for (int i = 0;i < 4;i++) {
        SetCursorPosition(50, 11 + i);
        printf("%c%c%c", 219, 219, 186);
    }
        //Line 5
    SetCursorPosition(50, 14);
    for (int i = 0;i < 3;i++) printf("%c%c", 219, 219);
    printf("%c", 187);

        //Line 6
    SetCursorPosition(50, 15);
    printf("%c", 200);
    for (int i = 0;i < 5;i++) printf("%c", 205);
    printf("%c", 188);

    //O
        //Line 1
    SetCursorPosition(58, 10);
    cout << " ";
    for (int i = 0;i < 3;i++) printf("%c%c", 219, 219);
    printf("%c", 187);

        //Line 2 3 4
    for (int j = 0; j < 4;j++) {
        SetCursorPosition(58, 11 + j);
        printf("%c%c", 219, 219);
        if (j == 0) {
            printf("%c%c%c%c", 201, 205, 205, 205);
        }
        else {
            printf("%c", 186);
            cout << "   ";
        }
        printf("%c%c", 219, 219);
        if (j == 0) printf("%c", 187);
        else printf("%c", 186);

    }

        //Line 5
    SetCursorPosition(58, 14);
    cout << " ";
    for (int i = 0;i < 3;i++) printf("%c%c", 219, 219);
    printf("%c%c", 201, 188);

        //Line 6
    SetCursorPosition(58, 15);
    cout << " ";
    printf("%c", 200);
    for (int i = 0;i < 5;i++) printf("%c", 205);
    printf("%c", 188);

    //A
        //Line 1
    SetCursorPosition(68, 10);
    cout << " ";
    for (int i = 0;i < 3;i++) printf("%c%c", 219, 219);
    printf("%c", 187);

        //Line 2
    SetCursorPosition(68, 11);
    printf("%c%c%c%c%c%c", 219, 219, 201, 205, 205, 205);
    printf("%c%c%c", 219, 219, 187);

        //Line 3
    SetCursorPosition(68, 12);
    printf("%c%c%c", 219, 219, 186);
    cout << "   ";
    printf("%c%c%c", 219, 219, 186);

        //Line 4
    SetCursorPosition(68, 13);
    for (int i = 0;i < 4;i++) printf("%c%c", 219, 219);
    printf("%c", 186);

        //Line 5
    SetCursorPosition(68, 14);
    printf("%c%c%c%c%c%c", 219, 219, 201, 205, 205, 205);
    printf("%c%c%c", 219, 219, 186);

        //Line 6
    SetCursorPosition(68, 15);
    printf("%c%c%c", 200, 205, 188);
    cout << "   ";
    printf("%c%c%c", 200, 205, 188);

    //D
        //Line 1
    SetCursorPosition(78, 10);
    for (int i = 0;i < 3;i++) printf("%c%c", 219, 219);
    printf("%c", 187);

        //Line 2
    SetCursorPosition(78, 11);
    printf("%c%c%c%c%c", 219, 219, 201, 205, 205);
    printf("%c%c%c", 219, 219, 187);

        //Line 3
    for (int i = 0;i < 2;i++) {
        SetCursorPosition(78, 12 + i);
        printf("%c%c%c", 219, 219, 186);
        cout << "  ";
        printf("%c%c%c", 219, 219, 186);
    }



}

void LoadingScreen() {
    SetCursorPosition(47, 18);
    printf("%c", 201);
    for (int i = 1;i <= 50;i++) printf("%c", 205);
    printf("%c", 187);

    SetCursorPosition(47, 19);
    printf("%c", 186);
    SetCursorPosition(98, 19);
    printf("%c", 186);

    SetCursorPosition(47, 20);
    printf("%c", 200);
    for (int i = 1;i <= 50;i++) printf("%c", 205);
    printf("%c", 188);

    setColor(0, 0);
    SetCursorPosition(48, 19);
    for (int i = 1;i <= 50;i++) {
        cout << ".";
        Sleep(10);
    }
    setColor(15, 0);

    Blank(47, 18, 52, 3);
}

//void LoadingScreen() {
//    SetCursorPosition(0, 0);
//    for (int i = 0;i < 39;i++) {
//        for (int j = 0;j < 147;j++) {
//            cout << " ";
//        }
//        cout << endl;
//        Sleep(20);
//    }
//}

//General Function
void ContentBox(short coordX, short coordY, short length, short width) {
    SetCursorPosition(coordX, coordY);
    printf("%c%c%c", 201, 205, 205);
    for (short i = 0; i < length - 6; i++) printf("%c", 196);
    printf("%c%c%c", 205, 205, 187);

    SetCursorPosition(coordX, coordY + 1);
    printf("%c", 186);
    for (short i = 0; i < width - 4; i++) {
        SetCursorPosition(coordX, coordY + 2 + i);
        printf("%c", 179);
    }
    SetCursorPosition(coordX, coordY + width - 2);
    printf("%c", 186);

    SetCursorPosition(coordX, coordY + width - 1);
    printf("%c%c%c", 200, 205, 205);
    for (short i = 0; i < length - 6; i++) printf("%c", 196);
    printf("%c%c%c", 205, 205, 188);

    SetCursorPosition(coordX + length - 1, coordY + 1);
    printf("%c", 186);
    for (short i = 0; i < width - 4; i++) {
        SetCursorPosition(coordX + length - 1, coordY + 2 + i);
        printf("%c", 179);
    }
    SetCursorPosition(coordX + length - 1, coordY + width - 2);
    printf("%c", 186);
}

void SelectionBox(short coordX, short coordY, short length) {
    SetCursorPosition(coordX, coordY);
    printf("%c", 201);
    for (short i = 1; i <= length; i++) printf("%c", 196);
    printf("%c", 187);

    SetCursorPosition(coordX, coordY + 1);
    printf("%c", 179);
    for (short i = 1; i <= length; i++) printf(" ");
    printf("%c", 179);

    SetCursorPosition(coordX, coordY + 2);
    printf("%c", 200);
    for (short i = 1; i <= length; i++) printf("%c", 196);
    printf("%c", 188);
}

void Blank(short coordX, short coordY, short length, short width) /*Fill Blank*/
{
    for (short i = 0;i < width;i++) {
        SetCursorPosition(coordX, coordY + i);
        for (short j = 0;j < length;j++) {
            cout << " ";
        }
    }
}

//1. Option New Game
void DrawBoard(short coordX, short coordY, short length, short width)
{
    SetCursorPosition(coordX, coordY);
    printf("%c", 218);
    for (short i = 0; i < width - 1; i++)
    {
        printf("%c%c%c%c", 196, 196, 196, 194);
    }
    printf("%c%c%c", 196, 196, 196);
    printf("%c\n", 191);
    for (short i = 0; i < length - 1; i++)
    {
        SetCursorPosition(coordX, coordY + 1 + 2 * i);
        printf("%c", 179);
        for (short i = 0; i < width; i++)
        {
            printf("%s%c", "   ", 179);
        }
        printf("\n");
        Sleep(20);

        SetCursorPosition(coordX, coordY + 2 + 2 * i);
        printf("%c", 195);
        for (short j = 0; j < width - 1; j++) {
            printf("%c%c%c%c", 196, 196, 196, 197);
        }
        printf("%c%c%c", 196, 196, 196);
        printf("%c\n", 180);
        Sleep(20);
    }

    SetCursorPosition(coordX, coordY + 2 * width - 1);
    printf("%c", 179);
    for (short i = 0; i < width; i++)
    {
        printf("%s%c", "   ", 179);
    }
    printf("\n");
    SetCursorPosition(coordX, coordY + 2 * width);
    printf("%c", 192);

    for (short i = 0; i < width - 1; i++)
    {
        printf("%c%c%c%c", 196, 196, 196, 193);
    }
    printf("%c%c%c", 196, 196, 196);

    printf("%c", 217);

    //In toa do bang
    for (int i = 1;i <= 12;i++) {
        SetCursorPosition(9, 6 + 2*i);
        cout << i;
    }

    SetCursorPosition(14, 32);
    for (int i = 1;i <= 9;i++) cout << i << "   ";
    for (int i = 10; i <= 12; i++) cout << i << "  ";
}

void GameInterface() {
    for (short i = 0;i <= 38;i++) {
        SetCursorPosition(75, 0 + i);
        if (i == 17) {
            printf("%c", 195);
            for (short j = 0;j <= 70;j++) printf("%c", 196);
        }
        else printf("%c", 179);
    }

    //Player Box
    SetCursorPosition(88, 3);
    cout << "Current Player";
    ContentBox(85, 4, 20, 11);

    SetCursorPosition(122, 3);
    cout << "Total Move";
    ContentBox(119, 4, 16, 3);

    SetCursorPosition(106, 19);
    cout << "Navigation";


    //Player 1
    SetCursorPosition(90, 22);
    cout << ANSI_Blue << "Player X:" << ANSI_Black;
    SetCursorPosition(88, 25);
    cout << "'W'    : Go Up ";
    SetCursorPosition(88, 27);
    cout << "'A'    : Go Left ";
    SetCursorPosition(88, 29);
    cout << "'S'    : Go Down ";
    SetCursorPosition(88, 31);
    cout << "'D'    : Go Right ";
    SetCursorPosition(88, 33);
    cout << "'SPACE': Mark";

    //Player 2
    SetCursorPosition(121, 22);
    cout << ANSI_Red << "Player O:" << ANSI_Black;
    SetCursorPosition(119, 25);
    printf("%s%c%s", "'", 286, "'    : Go Up");
    SetCursorPosition(119, 27);
    printf("%s%c%s", "'", 272, "'    : Go Left");
    SetCursorPosition(119, 29);
    printf("%s%c%s", "'", 287, "'    : Go Down");
    SetCursorPosition(119, 31);
    printf("%s%c%s", "'", 273, "'    : Go Right");
    SetCursorPosition(119, 33);
    cout << "'ENTER': Mark";

    //
    SetCursorPosition(106, 35);
    cout << "'ESC': Menu";
    SetCursorPosition(106, 37);
    cout << "'R'  : Undo";
}

void SaveBox() {
    ContentBox(115, 10, 24, 5);
    SetCursorPosition(122, 11);
    cout << "File's Name";
    SetCursorPosition(118, 13);
    cout << "Enter: ";
}

void XMark() {
    cout << ANSI_Blue;
    for (short i = 0; i <= 3; i++) {
        SetCursorPosition(88, 6 + i);
        for (short j = 0; j < i; j++) cout << "  ";
        printf("%c%c", 219, 219);
        for (short j = 0; j < 2 * (3 - i) - 1; j++) cout << "  ";
        if (i != 3) printf("%c%c", 219, 219);
        for (short j = 0; j < i; j++) cout << "  ";
    }

    for (short i = 2;i >= 0;i--) {
        SetCursorPosition(88, 12 - i);
        for (short j = 0; j < i; j++) cout << "  ";
        printf("%c%c", 219, 219);
        for (short j = 0; j < 2 * (3 - i) - 1; j++) cout << "  ";
        printf("%c%c", 219, 219);
        for (short j = 0; j < i; j++) cout << "  ";
        cout << endl;
    }
    cout << ANSI_Black;
}

void OMark() {
    cout << ANSI_Red;
    SetCursorPosition(88, 6);
    printf("%s%c%c%c%c%c%c%s\n", "    ", 219, 219, 219, 219, 219, 219, "    ");
    SetCursorPosition(88, 7);
    printf("%s%c%c%s%c%c%s\n", "  ", 219, 219, "      ", 219, 219, "  ");
    for (short i = 0;i < 3;i++) {
        SetCursorPosition(88, 8 + i);
        printf("%c%c%s%c%c\n", 219, 219, "          ", 219, 219);
    }
    SetCursorPosition(88, 11);
    printf("%s%c%c%s%c%c%s\n", "  ", 219, 219, "      ", 219, 219, "  ");
    SetCursorPosition(88, 12);
    printf("%s%c%c%c%c%c%c%s\n", "    ", 219, 219, 219, 219, 219, 219, "    ");
    cout << ANSI_Black;

}

void ScoreBox() {
    SetCursorPosition(12, 1);
    printf("%c", 218);
    for (int i = 0;i < 47;i++)printf("%c", 196);
    printf("%c", 191);

    for (int i = 0;i < 4;i++) {
        SetCursorPosition(12, 2 + i);
        if (i == 1) continue;
        else printf("%c", 179);
    }

    for (int i = 0;i < 4;i++) {
        SetCursorPosition(60, 2 + i);
        if (i == 1) continue;
        else printf("%c", 179);
    }

    SetCursorPosition(12, 6);
    printf("%c", 192);
    for (int i = 0;i < 47;i++) {
        if (i == 23) printf("%c", 193);
        else printf("%c", 196);
    }
    printf("%c", 217);

    SetCursorPosition(12, 3);
    printf("%c", 195);
    for (int i = 0;i < 47;i++) {
        if (i==23) printf("%c", 194);
        else printf("%c", 196);
    }
    printf("%c", 180);

    for (int i = 0;i < 2;i++) {
        SetCursorPosition(36, 4 + i);
        printf("%c", 179);
    }

    SetCursorPosition(31, 2);
    cout << "SCOREBOARD";

    SetCursorPosition(20, 4);
    cout << ANSI_Blue << "Player X" << ANSI_Black;

    SetCursorPosition(44, 4);
    cout << ANSI_Red << "Player O" << ANSI_Black;

    SetCursorPosition(23, 5);
    cout << XPoint;

    SetCursorPosition(47, 5);
    cout << OPoint;
}

void ReplayBox() {
    //Blank(85,3,50,12);
    ContentBox(98, 3, 25, 5);
    SetCursorPosition(102, 4);
    cout << "Start a new game?";
}

//2. Option Load Game
void LoadBox() {

    SetCursorPosition(36, 16);
    printf("%c%c%c", 201, 205, 205);
    for (short i = 0; i < 67; i++) {
        if (i == 52) printf("%c", 194);
        else printf("%c", 196);
    }
    printf("%c%c%c", 205, 205, 187);

    SetCursorPosition(36, 17);
    printf("%c", 186);
    for (short i = 0; i < 15; i++) {
        SetCursorPosition(36, 18 + i);
        if (i == 0) printf("%c", 195);
        else printf("%c", 179);
    }
    SetCursorPosition(36, 33);
    printf("%c", 186);

    SetCursorPosition(36, 34);
    printf("%c%c%c", 200, 205, 205);
    for (short i = 0; i < 67; i++) {
        if (i == 52) printf("%c", 193);
        else printf("%c", 196);
    }
    printf("%c%c%c", 205, 205, 188);

    SetCursorPosition(108, 17);
    printf("%c", 186);
    for (short i = 0;i < 15; i++) {
        SetCursorPosition(108, 18 + i);
        printf("%c", 179);
    }
    SetCursorPosition(108, 33);
    printf("%c", 186);


    SetCursorPosition(37, 18);
    for (short i = 0; i < 54; i++) printf("%c", 196);
    for (short i = 0; i < 17; i++) {
        SetCursorPosition(91, 17 + i);
        if (i == 1)printf("%c", 180);
        else printf("%c", 179);
    }

    SetCursorPosition(60, 17);
    cout << "SAVE FILE";
}

void PreviewBox() {
    SetCursorPosition(62, 20);
    printf("%c", 218);
    for (int i = 0;i < 23;i++) printf("%c", 196);
    printf("%c", 191);

    for (int i = 0;i < 12;i++) {
        SetCursorPosition(62, 21 + i);
        printf("%c", 179);
    }

    for (int i = 0;i < 12;i++) {
        SetCursorPosition(86, 21 + i);
        printf("%c", 179);
    }

    SetCursorPosition(62, 33);
    printf("%c", 192);
    for (int i = 0;i < 23;i++) printf("%c", 196);
    printf("%c", 217);

    for (int i = 0;i < 12;i++) {
        for (int j = 0;j < 12;j++) {
            SetCursorPosition(63 + 2 * j, 21 + i);
            cout << ".";
        }
    }
}

//4. Option About
void AboutContent() {
    SetCursorPosition(58, 15);
    cout << ANSI_Blue << "UNIVERSITY OF SCIENCE | 23TNT01";
    SetCursorPosition(67, 17);
    cout << ANSI_Red << "<< ADVISOR >>" << ANSI_Black;
    SetCursorPosition(58, 18);
    cout << "_______________________________";
    SetCursorPosition(65, 20);
    cout << ANSI_Green << "Truong Toan Thinh" << ANSI_Black;
    SetCursorPosition(58, 21);
    cout << "_______________________________";
    SetCursorPosition(58, 22);
    cout << "///////////////////////////////";
    SetCursorPosition(62, 24);
    cout << ANSI_Red << "<< MEMBERS OF GROUP 8 >>" << ANSI_Black;
    SetCursorPosition(58, 25);
    cout << "_______________________________";
    SetCursorPosition(61, 27);
    cout << "2322006 - Luu Thuong Hong ";
    SetCursorPosition(61, 29);
    cout << "2322017 - Bui Anh Quan";
    SetCursorPosition(61, 31);
    cout << "2322023 - Hoang Long Co";
    SetCursorPosition(61, 33);
    cout << "2322024 - Chung Tin Dat";
}

//5. Option Help
void NavigationContent() {
    //Player 1
    Blank(39, 16, 70, 17);
    SetCursorPosition(52, 17);
    cout << ANSI_Blue << "Player X:" << ANSI_Black;
    SetCursorPosition(50, 20);
    cout << "'W'    : Go Up ";
    SetCursorPosition(50, 22);
    cout << "'A'    : Go Left ";
    SetCursorPosition(50, 24);
    cout << "'S'    : Go Down ";
    SetCursorPosition(50, 26);
    cout << "'D'    : Go Right ";
    SetCursorPosition(50, 28);
    cout << "'SPACE': Mark";

    //Player 2
    SetCursorPosition(87, 17);
    cout << ANSI_Red << "Player O:" << ANSI_Black;
    SetCursorPosition(85, 20);
    printf("%s%c%s", "'", 286, "'    : Go Up");
    SetCursorPosition(85, 22);
    printf("%s%c%s", "'", 272, "'    : Go Left");
    SetCursorPosition(85, 24);
    printf("%s%c%s", "'", 287, "'    : Go Down");
    SetCursorPosition(85, 26);
    printf("%s%c%s", "'", 273, "'    : Go Right");
    SetCursorPosition(85, 28);
    cout << "'ENTER': Mark";

    //
    SetCursorPosition(63, 30);
    cout << "'ESC': Go Back/Pause Game";
    SetCursorPosition(63, 32);
    cout << "'R'  : Undo";
}

void HowtoplayContent() {
    Blank(39, 16, 70, 17);
    SetCursorPosition(43, 20);
    cout << "1. Players put their marks on the board respectively.";
    SetCursorPosition(43, 22);
    cout << "2. The first player to form a horizontal, vertical or diagonal";
    SetCursorPosition(46, 24);
    cout << "line of 5 marks wins.";
    SetCursorPosition(43, 26);
    cout << "3. If the board is completely filled and no one has winned, the";
    SetCursorPosition(46, 28);
    cout << "game will result in a draw.";
}