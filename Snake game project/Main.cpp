#include <iostream>
#include <windows.h>
#include "lib.h"
#include "consoleSetting.h"
#include "Snake.h"
#include "Play.h"
#include "Menu.h"
#include "PlayerBoard.h"
using namespace std;

int main() {
	srand(time(NULL));
	int xqua, yqua;
	ShowCur(false);
	vector <Player> p;
	Player player;
	conran a;
	a.sl = 5;
	int y = 12;
	int x = 50;
	int check = 2;
	int status = 0;
	int xtemp = 50;
	while ((status = MenuPlay()) != 3) {
		switch (status) {
		case 0:
			getInfoPlayer(player);
			ShowCur(false);
			PlayGameRanXuyenTuong(a, check, xqua, yqua, x, y,player);
			system("cls");
			ghiFile("Player.txt", player);
			gotoXY(50, 10);
			cout << "GAME OVER";
			gotoXY(50, 11);
			a.sl = 5;
			y = 12;
			x = 50;
			xtemp = 50;
			check = 2;
			for (int i = 0; i < a.sl; i++) {
				a.toadox[i] = xtemp;
				a.toadoy[i] = 12;
				xtemp--;
			}
			player.name = "";
			player.point = 0;
			system("pause");
			system("cls");
			break;
		case 1:
			ShowCur(false);
			leaderBoard(p);
			break;
		case 2:
			ShowCur(false);
			Tutorial();
			break;
		default:
			break;
		}
	}
	

	
	return 0;
}




/*
while (true){
		gotoXY(xcu, ycu);
		cout << "           ";
		gotoXY(x, y);
		SetColor(i);
		i++;
		if (i > 15) {
			i = 1;
		}
		cout << "CAP CAP CAP";
		xcu = x;
		ycu = y;

		if (_kbhit()) {
			char kitu = _getch();
			if (kitu == 'w') {
				check = 1;
			}
			else if (kitu == 's') {
				check = 0;
			}
			else if (kitu == 'a') {
				check = 3;
			}
			else if (kitu == 'd') {
				check = 2;
			}
		}
		if (y == 27) {
			check = 1;
		}
		else if (y == 1) {
			check = 0;
		}
		if (x == 1) {
			check = 2;
		}
		else if (x == 100) {
			check = 3;
		}
		if (check == 0) {
			y++;
		}
		else if (check == 1) {
			y--;
		}
		if (check == 2) {
			x++;
		}
		else if (check == 3) {
			x--;
		}
		Sleep(50);
	}*/