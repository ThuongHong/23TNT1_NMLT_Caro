#include "FileGame.h"
#include "GamePlay.h"

DIR* d;
struct dirent* dir;
string fileName[7]{ "" }, tmpFileName = "";
int nFile = 0;

string InputFileName(int x, int y) {
    const int LEN = 10;
    int count = 0;
    string s;
    SetCursorPosition(x, y);
    while (true) {
        c = _getch();
        if (c == 13 && count > 0) {
            return s;
        }
        if (c == 27) {
            return "";
        }
        if (count < LEN) {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                s += c;
                SetCursorPosition(x + count, y);
                cout << char(c);
                count++;
            }
        }
        if (c == 8 && s.length() >= 1) {
            s.erase(s.length() - 1);
            SetCursorPosition(x + count - 1, y);
            cout << ' ';
            count--;
            SetCursorPosition(x + count, y);
        }
    }
}

void SaveFile(string s) {
    if (s == "") return;
    FILE* out;
    string fileName = "SaveGame\\" + to_string(++nFile) + ". " + s + ".txt";
    fopen_s(&out, fileName.c_str(), "w+");

    if (out != NULL) {
        fprintf(out, "%d\n", Moves);
        fprintf(out, "%d %d\n", XPoint, OPoint);
        fprintf(out, "%d\n", Gamemode);
        for (int i = 0; i < moves.size(); i++) {
            fprintf(out, "%d %d %d %d\n", moves[i].x, moves[i].y, moves[i].coordX, moves[i].coordY);
        }

        fclose(out);
    }
}

bool RenameFile(string s) {
    if (s == "") return;
    string oldName = "SaveGame\\" + s + ".txt";
    string newName = "SaveGame\\" + to_string(opt) + ". " + InputFileName(65, 19) + ".txt";

    if (rename(oldName.c_str(), newName.c_str()) == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool RemoveFile(string s) {
    string fileName = "SaveGame\\" + s + ".txt";

    // Thong bao ...
    if (remove(fileName.c_str()) == 0) {
        SortFileName();
        return true;
    }
    else {
        return false;
    }
}

void LoadFile(string s) {
    FILE* inp;
    string fileName = "SaveGame\\" + s + ".txt";
    fopen_s(&inp, fileName.c_str(), "r+");

    if (inp != NULL) {
        int x, y, coordX, coordY;
        fscanf_s(inp, "%d", &Moves);
        fscanf_s(inp, "%d %d", &XPoint, &OPoint);
        fscanf_s(inp, "%d", &Gamemode);
        for (int i = 0; i < Moves; i++) {
            fscanf_s(inp, "%d %d %d %d", &x, &y, &coordX, &coordY);
            moves.push_back({ x, y, coordX, coordY });
        }
        fclose(inp);
    }
}

void getFileName() {
    nFile = 0;
    for (int i = 0; i < 7; i++) fileName[i] = "";
    d = opendir("SaveGame");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            tmpFileName = dir->d_name;
            if (tmpFileName != "." && tmpFileName != "..") {
                tmpFileName.erase(tmpFileName.length() - 4, tmpFileName.length() - 1);
                fileName[++nFile] = tmpFileName;
            }
        }
        closedir(d);
    }
}

void SortFileName() {
    getFileName();
    string oldName;
    string newName;
    for (int i = 1; i <= nFile; i++) {
        oldName = "SaveGame\\" + fileName[i] + ".txt";
        newName = oldName; newName[9] = char(i + '0');
        rename(oldName.c_str(), newName.c_str());
    }
    getFileName();
}