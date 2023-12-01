#include "Settings.h"
#include "Navigation.h"
#include "Graphic.h"
#include "FileGame.h"

//ANSI Color Code
string ANSI_Black = "\u001B[30m";
string ANSI_Red = "\u001B[31m";
string ANSI_Green = "\u001B[32m";
string ANSI_LightYellow = "\u001B[93m";
string ANSI_Yellow = "\u001B[33m";
string ANSI_Blue = "\u001B[34m";
string ANSI_Purple = "\u001B[35m";
string ANSI_Cyan = "\u001B[36m";
string ANSI_White = "\u001B[37m";
string ANSI_Bold = "\u001B[1m";
string ANSI_Unbold = "\u001B[21m";
string ANSI_Underline = "\u001B[4m";
string ANSI_StopUnderline = "\u001B[24m";
string ANSI_Blink = "\u001B[5m";
string ANSI_Grey = "\u001b[90m";

//General Funciton
COORD coord = { 0,0 };
int c = 0;
int XPoint = 0, OPoint = 0;

void SetCursorPosition(short coordX, short coordY) {
    SetConsoleCursorPosition(std_output, { coordX,coordY });
}

void GetCursorPosition() {
    CONSOLE_SCREEN_BUFFER_INFO  csbi;
    GetConsoleScreenBufferInfo(std_output, &csbi);
    coord.X = csbi.dwCursorPosition.X;
    coord.Y = csbi.dwCursorPosition.Y;
}

//Set Console Size
HANDLE std_output = GetStdHandle(STD_OUTPUT_HANDLE);
HWND ConsoleWin = GetConsoleWindow();
CONSOLE_FONT_INFOEX cfi;

void SetWindowSize(SHORT width, SHORT height)
{
    SMALL_RECT WindowSize;
    WindowSize.Top = 0;
    WindowSize.Left = 0;
    WindowSize.Right = width;
    WindowSize.Bottom = height;

    SetConsoleWindowInfo(std_output, 1, &WindowSize);
}

void SetScreenBufferSize(SHORT width, SHORT height)
{
    COORD NewSize;
    NewSize.X = width;
    NewSize.Y = height;

    SetConsoleScreenBufferSize(std_output, NewSize);
}

//Pre Settings
void SetConsolePosition() {
    MoveWindow(ConsoleWin, 0, 0, 1550, 830, 1);
}

void FixConsoleWindow()
{
    LONG style = GetWindowLong(ConsoleWin, GWL_STYLE);
    style &= ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
    SetWindowLongPtr(ConsoleWin, GWL_STYLE, style);
}

void CursorState(bool state)
{
    CONSOLE_CURSOR_INFO ci;
    ci.dwSize = 10;
    ci.bVisible = state;
    SetConsoleCursorInfo(std_output, &ci);
}

void SetConsoleFont() {
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 10;
    cfi.dwFontSize.Y = 20;
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    wcscpy_s(cfi.FaceName, L"Lucida Console");
    SetCurrentConsoleFontEx(std_output, 0, &cfi);
}

void PreSettings() {
    system("color F0");
    SetConsoleTitle(L"Co Caro - Nhom 8");
    CursorState(false);
    SetConsoleFont();
    FixConsoleWindow();
    SetConsolePosition();

    //SetWindowSize's Width & Height cannot be greater than (Screen Buffer Height – 1) and (Screen Buffer Width – 1)
    //SetWindowSize needs to be called before SetScreenBufferSize   
    SetWindowSize(146, 38);
    SetScreenBufferSize(147, 39);

}

//0. Menu
short opt = 0;
short subopt = 1;
bool IsSelected = false;
bool Exit = false;
bool Esc = false;
bool Sound = true;
bool Music = true;

void MenuSelection() {
    //New Game
    SetCursorPosition(67, 20);
    if (opt == 1) {
        cout << ANSI_Green;
        printf("%c", 272);
    }
    else cout << " ";
    SetCursorPosition(78, 20);
    if (opt == 1) {
        cout << ANSI_Green;
        printf("%c", 273);
    }
    else cout << " ";

    SetCursorPosition(69, 20);
    cout << "NEW GAME" << ANSI_Black << endl;

    //Load Game
    SetCursorPosition(67, 23);
    if (opt == 2) {
        cout << ANSI_Green;
        printf("%c", 272);
    }
    else cout << " ";
    SetCursorPosition(79, 23);
    if (opt == 2) {
        cout << ANSI_Green;
        printf("%c", 273);
    }
    else cout << " ";

    SetCursorPosition(69, 23);
    cout << "LOAD GAME" << ANSI_Black << endl;

    //Settings
    SetCursorPosition(67, 26);
    if (opt == 3) {
        cout << ANSI_Green;
        printf("%c", 272);
    }
    else cout << " ";
    SetCursorPosition(78, 26);
    if (opt == 3) {
        cout << ANSI_Green;
        printf("%c", 273);
    }
    else cout << " ";

    SetCursorPosition(69, 26);
    cout << "SETTINGS" << ANSI_Black << endl;

    //About
    SetCursorPosition(67, 29);
    if (opt == 4) {
        cout << ANSI_Green;
        printf("%c", 272);
    }
    else cout << " ";
    SetCursorPosition(75, 29);
    if (opt == 4) {
        cout << ANSI_Green;
        printf("%c", 273);
    }
    else cout << " ";
    SetCursorPosition(69, 29);
    cout << "ABOUT" << ANSI_Black << endl;

    //Help
    SetCursorPosition(67, 32);
    if (opt == 5) {
        cout << ANSI_Green;
        printf("%c", 272);
    }
    else cout << " ";
    SetCursorPosition(74, 32);
    if (opt == 5) {
        cout << ANSI_Green;
        printf("%c", 273);
    }
    else cout << " ";

    SetCursorPosition(69, 32);
    cout << "HELP" << ANSI_Black << endl;

    //Exit
    SetCursorPosition(67, 35);
    if (opt == 6) {
        cout << ANSI_Green;
        printf("%c", 272);
    }
    else cout << " ";
    SetCursorPosition(74, 35);
    if (opt == 6) {
        cout << ANSI_Green;
        printf("%c", 273);
    }
    else cout << " ";

    SetCursorPosition(69, 35);
    cout << "EXIT" << ANSI_Black << endl;

    NavigateUpDown(6);
}

//1. Option New Game
void GameMenuSelection() {
    ContentBox(119, 8, 16, 9);
    SetCursorPosition(124, 10);
    if (opt == 1) cout << ANSI_Green;
    cout << "Resume" << ANSI_Black;
    SetCursorPosition(125, 12);
    if (opt == 2) cout << ANSI_Green;
    cout << "Save" << ANSI_Black;
    SetCursorPosition(125, 14);
    if (opt == 3) cout << ANSI_Green;
    cout << "Quit" << ANSI_Black;

    subopt = 1;
    NavigateUpDown(3);
}

//void Replay() {
//    opt = 1;
//    ReplayBox();
//    NavigateLeftRight(2);
//    SetCursorPosition(122, 10);
//    if (opt == 1) cout << ANSI_Green;
//    cout << "Yes"<<ANSI_Black;
//    SetCursorPosition(131, 10);
//    if (opt == 2) cout << ANSI_Green;
//    cout << "No" << ANSI_Black;
//}

//2. Option Load Game
void LoadSelection1() {
    getFileName();
    SetCursorPosition(55, 21);
    if (opt == 1) cout << ANSI_Green;
    cout << "1. " << fileName[1] << ANSI_Black;
    SetCursorPosition(55, 23);
    if (opt == 2) cout << ANSI_Green;
    cout << "2. " << fileName[2] << ANSI_Black;
    SetCursorPosition(55, 25);
    if (opt == 3) cout << ANSI_Green;
    cout << "3. " << fileName[3] << ANSI_Black;
    SetCursorPosition(55, 27);
    if (opt == 4) cout << ANSI_Green;
    cout << "4. " << fileName[4] << ANSI_Black;
    SetCursorPosition(55, 29);
    if (opt == 5) cout << ANSI_Green;
    cout << "5. " << fileName[5] << ANSI_Black;
    SetCursorPosition(55, 31);
    if (opt == 6) cout << ANSI_Green;
    cout << "6. " << fileName[6] << ANSI_Black;

    NavigateLoad1(6);
}

void LoadSelection2() {
    SetCursorPosition(95, 19);
    if (subopt == 1) cout << ANSI_Green;
    cout << "Load"<<ANSI_Black;
    SetCursorPosition(94, 23);
    if (subopt == 2) cout << ANSI_Green;
    cout << "Rename" << ANSI_Black;
    SetCursorPosition(94, 27);
    if (subopt == 3) cout << ANSI_Green;
    cout << "Delete" << ANSI_Black;
    SetCursorPosition(95, 31);
    if (subopt == 4) cout << ANSI_Green;
    cout << "Back" << ANSI_Black;

    NavigateLoad2(4);
}

//3. Option Settings
void SettingsSelection1() {

    if (opt == 1) cout << ANSI_Blue;
    SetCursorPosition(66, 23);
    cout << "SOUND:"<<ANSI_Black;    
    
    if (opt == 2) cout << ANSI_Blue;
    SetCursorPosition(66, 25);
    cout << "MUSIC:" << ANSI_Black;
    
    NavigateSettings1(2);
}

void SettingsSelection2() {
    if (opt == 1) {
        SetCursorPosition(76, 23);
        cout << "/";

        SetCursorPosition(73, 23);
        if (subopt == 1) cout << ANSI_Green;
        cout << "On" << ANSI_Black;

        SetCursorPosition(78, 23);
        if (subopt == 2) cout << ANSI_Green;
        cout << "Off" << ANSI_Black;
    }

    
    if (opt == 2) {
        SetCursorPosition(76, 25);
        cout << "/";

        SetCursorPosition(73, 25);
        if(subopt == 1) cout << ANSI_Green;
        cout << "On" << ANSI_Black;

        SetCursorPosition(78, 25);
        if(subopt == 2) cout << ANSI_Green;
        cout << "Off" << ANSI_Black;
    }

    NavigateSettings2(2);
}

//4. Option About
void AboutSelection() {
    AboutContent();
    NavigateAbout();
}

//5. Option Help
void HelpSelection() {

    //Navigation
    if (opt == 1) {
        NavigationContent();
        cout << ANSI_Green;
    }
    SetCursorPosition(54, 36);
    cout << "NAVIGATION" << ANSI_Black;

    //How to Play
    if (opt == 2) {
        HowtoplayContent();
        cout << ANSI_Green;
    }
    SetCursorPosition(83, 36);
    cout << "HOW TO PLAY" << ANSI_Black;

    NavigateLeftRight(2);
}