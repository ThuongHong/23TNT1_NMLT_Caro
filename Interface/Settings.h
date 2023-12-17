#pragma once
#pragma comment(lib, "winmm.lib") // Lien quan den Music / Sound
#include <string>
#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;


//General Funciton
extern COORD coord;
extern int c;
extern int XPoint, OPoint;

void SetCursorPosition(short coordX, short coordY);

void GetCursorPosition();

//Set Console Size
extern HANDLE std_output;

extern HWND ConsoleWin;

void SetWindowSize(SHORT width, SHORT height);

void SetScreenBufferSize(SHORT width, SHORT height);

//PreSettings
void SetConsolePosition();

void FixConsoleWindow();

void CursorState(bool state);

void SetConsoleFont();

void PreSettings();

//0. Menu
extern short opt;
extern short subopt;
extern bool IsSelected;
extern bool Exit;
extern bool Esc;
extern bool Sound;
extern bool Music;

void MenuSelection();

//1. Option New Game
extern int Gamemode;

void SelectGamemode(int& Gamemode);

void GameMenuSelection();

void Replay();

void WinEffect();

//2. Option Load Game
void LoadSelection1();

void LoadSelection2();

//3. Option Settings
void SettingsSelection1();

void SettingsSelection2();

//4. Option About
void AboutSelection();

//5. Option Help

void HelpSelection();


//ANSI Color Code
extern std::string ANSI_Black;
extern std::string ANSI_Red;
extern std::string ANSI_Green;
extern std::string ANSI_LightYellow;
extern std::string ANSI_Yellow;
extern std::string ANSI_Yellow_Background;
extern std::string ANSI_Blue;
extern std::string ANSI_Perple;
extern std::string ANSI_Cyan;
extern std::string ANSI_White;
extern std::string ANSI_Bold;
extern std::string ANSI_Unbold;
extern std::string ANSI_Underline;
extern std::string ANSI_StopUnderline;
extern std::string ANSI_Blink;
extern std::string ANSI_Grey;