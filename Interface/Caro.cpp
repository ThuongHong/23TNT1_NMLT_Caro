#include "Settings.h"
#include "Graphic.h"
#include "Navigation.h"
#include "Gameplay.h"
#include "FileGame.h"

/*enum
{
    COLOR_BLACK,    //0
    COLOR_DBLUE,    //1
    COLOR_DGREEN,   //2
    COLOR_DCYAN,    //3
    COLOR_DRED,     //4
    COLOR_DMAGENTA, //5
    COLOR_DYELLOW,  //6
    COLOR_BROWN = COLOR_DYELLOW,    //6
    COLOR_LGRAY,    //7
    COLOR_DGRAY,    //8
    COLOR_LBLUE,    //9
    COLOR_LGREEN,   //10
    COLOR_LCYAN,    //11
    COLOR_LRED,     //12
    COLOR_LMAGENTA, //13
    COLOR_LYELLOW,  //14
    COLOR_YELLOW = COLOR_LYELLOW,   //14
    COLOR_WHITE     //15
};*/

int main()
{
    PreSettings();
    PlaySound(TEXT("theme.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    while (!Exit) {
        switch (opt) {

        case 0://Menu
            system("cls");
            LoadingScreen();
            Esc = false;
            IsSelected = false;
            opt = 1;
            GameTitle();
            MenuX();
            MenuO();
            while (!IsSelected) MenuSelection();
            break;

        case 1://New Game
            IsSelected = false;
            opt = 1;
            if (Music == true) mciSendString(L"play game_start.wav", NULL, 0, NULL);
            Blank(67, 20, 13, 16);
            ContentBox(62, 23, 22, 7);
            while (!IsSelected && !Esc) {
                SelectGamemode(Gamemode);
            }
            if (Esc) {
                opt = 0;
                break;
            }


        Replay:
            ResetData();
        LoadGame:
            IsSelected = false;
            Esc = false;
            opt = 1;
            system("cls");
            LoadingScreen();
            DrawBoard(12, 7, 12, 12);
            GameInterface();
            CursorState(true);
            ScoreBox();
            MoveHistory();
            LoadHistory();

            if (moves.empty()) {
                XMark();
                SetCursorPosition(34, 18);
            }
            else {
                Moving lastMove = moves.back();
                if (moves.size() % 2 == 0) {
                    XMark();
                }
                else {
                    OMark();
                }
                SetCursorPosition(lastMove.coordX, lastMove.coordY);

            }

            GetCursorPosition();

            int a, b;
            while (!Esc) {
                a = coord.X; b = coord.Y;
                SetCursorPosition(126, 5);
                cout << setw(3) << setfill('0') << Moves;
                SetCursorPosition(a, b);

                c = _getch();

                if (c == 27) {
                    CursorState(false);
                    while (!IsSelected) GameMenuSelection();
                    if (opt == 1) {
                        Blank(119, 8, 17, 8);
                        IsSelected = false;
                        SetCursorPosition(a, b);
                        CursorState(true);
                    }
                    else if (opt == 2) {
                        Blank(119, 8, 17, 9);
                        SaveBox();
                        SetCursorPosition(125, 13);
                        CursorState(true);
                        while (IsSelected) {
                            //Demo Save
                            getFileName(); // De kiem tra hien tai dang co bao nhieu files
                            SaveFile(InputFileName(125, 13));
                            if (c == 27) {
                                Blank(116, 10, 23, 5);
                                SetCursorPosition(a, b);
                                IsSelected = false;
                            }
                            else if (c == 13) {
                                CursorState(false);
                                Blank(117, 11, 21, 2);
                                SetCursorPosition(117, 11);
                                cout << "Successfully Save !!!";
                                Sleep(1500);
                                Blank(115, 10, 24, 5);
                                SetCursorPosition(a, b);
                                IsSelected = false;
                                opt = 1;
                            }
                            else printf("%c", c);
                        }
                        CursorState(true);
                    }
                    else if (opt == 3) {
                        opt = 0;
                        break;
                    }
                }
                else GameMove(Result, c);
                if (Result != 0) {
                    WinEffect();
                    Sleep(1500);
                    ReplayBox();
                    opt = 1;
                    while (!IsSelected) Replay();
                    if (opt == 1) goto Replay;
                    else {
                        opt = 0;
                        break;
                    }
                }
            }
            break;

        case 2://Load Game
            system("cls");
            LoadingScreen();
            LoadBox();
            LoadGame();
            opt = 1;
            IsSelected = false;

            while (!Esc) {
                getFileName();
                LoadFile(fileName[opt]);
                PreviewHistory();
                LoadSelection1();
                if (IsSelected) {
                    subopt = 1;
                    while (IsSelected) LoadSelection2();
                    switch (subopt) {
                    case 1:
                        //Ham Load
                        LoadFile(fileName[opt]);
                        opt = 1;
                        goto LoadGame;
                        break;
                    case 2:
                        SetCursorPosition(55, 19);
                        cout << "New name: ";
                        CursorState(true);
                        //Demo Rename
                        while (1) {
                            bool RenameOk = RenameFile(fileName[opt]);
                            if (c == 27) {
                                Blank(55, 19, 25, 1);
                                CursorState(false);
                                break;
                            }
                            else if (c == 13) {
                                //Ham Rename
                                if (RenameOk == true) {
                                    SetCursorPosition(52, 19);
                                    cout << "Successfully Renamed !!!";
                                }
                                else {
                                    SetCursorPosition(51, 19);
                                    cout << "Unsuccessfully Renamed !!!";
                                }
                                Sleep(1500);
                                Blank(51, 19, 26, 1);
                                CursorState(false);
                                break;
                            }
                            else printf("%c", c);
                        }
                        break;
                    case 3:
                        //Ham Delete
                        if (RemoveFile(fileName[opt]) == true) {
                            getFileName();

                            SetCursorPosition(55, 19);
                            cout << "Successfully Deleted !!!";
                            Sleep(1500);
                            Blank(55, 19, 25, 1);
                            CursorState(false);
                        }
                        else {
                            SetCursorPosition(55, 19);
                            cout << "Unuccessfully Deleted !!!";
                            Sleep(1500);
                            Blank(55, 19, 25, 1);
                            CursorState(false);
                        }
                        break;
                    default:
                        break;
                    }
                Blank(97, 19, 6, 13);
                }
            }
            opt = 0;
            break;

        case 3://Settings
            system("cls");
            LoadingScreen();
            Settings();
            opt = 1;
            ContentBox(63, 21, 20, 7);
            if (Music == false) cout << ANSI_Grey;
            MusicNote(); cout << ANSI_Black;
            if (Sound == false) cout << ANSI_Grey;
            SoundEffect(); cout << ANSI_Black;
            while (!Esc)
            {    
                SettingsSelection1();
                if (Esc) break;
                while (IsSelected) {
                    SettingsSelection2();
                    if (Music == false) cout << ANSI_Grey;
                    MusicNote(); cout << ANSI_Black;
                    if (Sound == false) cout << ANSI_Grey;
                    SoundEffect(); cout << ANSI_Black;
                    if (!IsSelected) Blank(73, 23, 8, 3);
                }
            }
            opt = 0;
            break;

        case 4://About
            system("cls");
            LoadingScreen();
            About();
            ContentBox(38, 14, 72, 21);
            while (!Esc) AboutSelection();
            opt = 0;
            break;

        case 5://Help
            system("cls");
            LoadingScreen();
            Help();
            opt = 1;
            ContentBox(38, 15, 72, 20);
            SelectionBox(52, 35, 12);
            SelectionBox(81, 35, 13);
            while (!Esc) HelpSelection();
            opt = 0;
            break;

        case 6://Exit
            Exit = true;
            system("cls");
            break;
        }
    }

    return 0;
}
