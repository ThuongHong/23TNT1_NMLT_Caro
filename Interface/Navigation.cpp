#include "Navigation.h"
#include "FileGame.h"
#include "Graphic.h"

//0. Menu
//1. Option New Game
//2.1 Option Load Game
//3.1 Option Settings
void NavigateUpDown(short max) {
    c = _getch();
    if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
    if (c == 224) c = _getch();
    switch (c) {
    case 72: //Up
        if (opt > 1) opt--;
        break;

    case 80: //Down
        if (opt < max) opt++;
        break;

    case 13: //Enter
        IsSelected = true;
        break;

    case 27: //Esc
        Esc = true;
        break;
    }
}

//2. Option Load Game
void NavigateLoad2(short max) {
    c = _getch();
    if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
    if (c == 224) c = _getch();
    switch (c) {
    case 72: //Up
        if (subopt > 1) subopt--;
        break;

    case 80: //Down
        if (subopt < max) subopt++;
        break;

    case 13: //Enter
        IsSelected = false;
        break;
    }
}

//3. Option Settings
void NavigateSettings2(short max) {
    c = _getch();
    if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
    if (c == 224) c = _getch();
    switch (c) {
    case 75: //Left
        if (subopt > 1) subopt--;
        break;

    case 77: //Right
        if (subopt < max) subopt++;
        break;

    case 13: //Enter
        if (opt == 1) {
            if (subopt == 1) Sound = true;
            else Sound = false;
        }
        else {
            if (subopt == 1 && Music == false) {
                PlaySound(TEXT("theme.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                Music = true;
            }
            else if (subopt == 2) {
                PlaySound(0, 0, 0);
                Music = false;
            }
        }
        break;
    case 27: //Esc
        subopt = 1;
        IsSelected = false;
        break;
    }
}

//4. Option About
void NavigateAbout() {
    c = _getch();
    if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
    if (c == 27) Esc = true;
}

//5. Option Help
void NavigateLeftRight(short max) {
    c = _getch();
    if (Sound == true) mciSendString(L"play select.wav", NULL, 0, NULL);
    if (c == 224) c = _getch();
    switch (c) {
    case 75: //Left
        if (opt > 1) opt--;
        break;

    case 77: //Right
        if (opt < max) opt++;
        break;

    case 13: //Enter
        IsSelected = true;
        break;

    case 27: //Esc
        Esc = true;
        break;
    }
}