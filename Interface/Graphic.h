#pragma once
#include "Settings.h"
#include "Gameplay.h"

// Ham chinh mau cho 1 pixel
void setColor(int b_color, int t_color);

// Chu X giao dien menu
void MenuX();

// Chu O giao dien menu
void MenuO();

// Ham ve chu LOAD GAME
void LoadGame();

// Ham ve chu SETTINGS
void Settings();

// Ham ve chu ABOUT
void About();

// Ham ve chu HELP
void Help();

// Ham ve hieu ung X thang
void XWin();

// Ham ve hieu ung O thang
void OWin();

// Ham ve hieu ung hoa
void DrawEffect();

// Ham ve tay cam do choi va menu
void GameTitle();

// Ve not nhac
void MusicNote();

// Ve Sound Effect
void SoundEffect();

// Ve thanh tai tien do
void Loading();

void LoadingScreen();

//General Function
void ContentBox(short coordX, short coordY, short length, short width);

void SelectionBox(short coordX, short coordY, short length);

void Blank(short coordX, short coordY, short length, short width);

//1. Option New Game
void DrawBoard(short coordX, short coordY, short length, short width);

void GameInterface();

void SaveBox();

void XMark();

void OMark();

void ScoreBox();

void ReplayBox();

//2. Option Load Game
void LoadBox();

void PreviewBox();

//3. Option Settings

//4. Option About
void AboutContent();

//5. Option Help
void NavigationContent();

void HowtoplayContent();