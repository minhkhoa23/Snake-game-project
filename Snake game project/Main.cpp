#include <iostream>
#include <windows.h>
#include "lib.h"
#include "consoleSetting.h"
#include "Snake.h"
using namespace std;

int main() {
	ShowCur(false);
	conran a;
	a.sl = 12;
	int y = 12;
	int x = 50;
	int check = 2;
	veTuong();
	khoiTaoRan(a);
	veConRan(a);
	while (true) {
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
		xoaDuongDi(a);
		SnakeMove(a, x, y);
		Sleep(50);
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