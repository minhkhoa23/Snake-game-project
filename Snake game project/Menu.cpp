#include "Menu.h"

int MenuPlay() {
	int choice[4] = { 0,0,0,0 };
	int curchoice = 0,  key;
    SetColor(1);
    gotoXY(24, 2);
    cout << " ____  _   _    _    _  _______    ____    _    __  __ _____   _ ";
    gotoXY(24, 3);
    cout << "/ ___|| \\ | |  / \\  | |/ / ____|  / ___|  / \\  |  \\/  | ____| | |";
    SetColor(4);
    gotoXY(24, 4);
    cout << "\\___ \\|  \\| | / _ \\ | ' /|  _|   | |  _  / _ \\ | |\\/| |  _|   | |";
    gotoXY(24, 5);
    cout << " ___) | |\\  |/ ___ \\| . \\| |___  | |_| |/ ___ \\| |  | | |___  |_|";
    SetColor(10);
    gotoXY(24, 6);
    cout << "|____/|_| \\_/_/   \\_\\_|\\_\\_____|  \\____/_/   \\_\\_|  |_|_____| (_)";
    while (1) {
        choice[curchoice] = 1;
        if (choice[0]) {
            setColor(112);
            for (int i = 0; i < 3; i++) {
                gotoXY(50, 9 + i);
                cout << "               ";
            }
            gotoXY(53, 10);
            setColor(112 + 1);
            cout << "PLAY SNAKE";
        }
        else {
            setColor(7);

            for (int i = 0; i < 3; i++) {
                gotoXY(50, 9 + i);
                cout << "               ";
            }

            gotoXY(53, 10);
            setColor(1);
            cout << "PLAY SNAKE";
        }
        if (choice[1]) {
            setColor(112);
            for (int i = 0; i < 3; i++) {
                gotoXY(50, 12 + i);
                cout << "                ";
            }

            gotoXY(53, 13);
            setColor(112 + 4);
            cout << "LeaderBoard";
        }
        else {
            setColor(7);

            for (int i = 0; i < 3; i++) {
                gotoXY(50, 12 + i);
                cout << "                ";
            }

            gotoXY(53, 13);
            setColor(4);
            cout << "LeaderBoard";
        }
        if (choice[2]) {
            setColor(112);

            for (int i = 0; i < 3; i++) {
                gotoXY(50, 15 + i);
                cout << "                ";
            }

            gotoXY(53, 16);
            setColor(112 + 2);
            cout << "Tutorial";
        }
        else {
            setColor(7);

            for (int i = 0; i < 3; i++) {
                gotoXY(50, 15 + i);
                cout << "                ";
            }

            gotoXY(53, 16);
            setColor(6);
            cout << "Tutorial";
        }
        if (choice[3]) {
            setColor(112);

            for (int i = 0; i < 3; i++) {
                gotoXY(50, 18 + i);
                cout << "                ";
            }

            gotoXY(53, 19);
            setColor(112 + 13);
            cout << "EXIT";
        }
        else {
            setColor(7);
            for (int i = 0; i < 3; i++) {
                gotoXY(50, 18 + i);
                cout << "                ";
            }

            gotoXY(53, 19);
            setColor(13);
            cout << "EXIT";
        }
        setColor(7);
        key = _getch();
        switch (key) {
        case 'w':
            choice[curchoice] = 0;
            if (curchoice > 0) {
                curchoice--;
            }
            else {
                curchoice = 3;
            }
            break;
        case 's':
            choice[curchoice] = 0;
            if (curchoice < 3) {
                curchoice++;
            }
            else {
                curchoice = 0;
            }
            break; 
        case 13:
            system("cls");
            return curchoice;
        default:
            break;
        }
        
    } 
}

void Tutorial() {
    SetColor(9);
    gotoXY(40, 10);
    cout << "Press wasd or arrow key to move ";
    SetColor(10);
    gotoXY(40, 12);
    cout << "Press enter to choose object";
    SetColor(11);
    _getch();
    system("cls");
}