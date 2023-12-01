#pragma once
#include "Settings.h"
#include "dirent.h"

extern DIR* d;
extern struct dirent* dir;
extern string fileName[7], tmpFileName;
extern int nFile;

string InputFileName(int x, int y);

void SaveFile(string s);

bool RenameFile(string s);

bool RemoveFile(string s);

void LoadFile(string s);

void getFileName();
