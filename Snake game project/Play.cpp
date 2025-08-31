#include "Play.h"


//khong dung duoc nua dau vi da sua lai ham Move cho di xuyen tuong roi
void PlayGame(conran& a, int& check, int& xqua, int& yqua,int& x, int& y, Player& p) {
	bool gameover = false;
	veTuong();
	khoiTaoRan(a);
	veConRan(a);
	taoQua(xqua, yqua, a);
	while (gameover == false) {
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
		SnakeMove(a, x, y, xqua, yqua,p);
		gameover = kiemTraRan(a);
		Sleep(150);
	}
}

void PlayGameRanXuyenTuong(conran& a, int& check, int& xqua, int& yqua, int& x, int& y, Player& p) {
	bool gameover = false;
	veTuong();
	khoiTaoRan(a);
	veConRan(a);
	taoQua(xqua, yqua, a);
	while (gameover == false) {
		gotoXY(104, 12);
		cout << "POINTS: " << p.point;
		if (_kbhit()) {
			char kitu = _getch();
			if (check == 0) {
				if (kitu == 's') {
					check = 0;
				}
				else if (kitu == 'a') {
					check = 3;
				}
				else if (kitu == 'd') {
					check = 2;
				}
			}
			else if (check == 1) {
				if (kitu == 'w') {
					check = 1;
				}
				else if (kitu == 'a') {
					check = 3;
				}
				else if (kitu == 'd') {
					check = 2;
				}
			}
			else if (check == 2) {
				if (kitu == 'w') {
					check = 1;
				}
				else if (kitu == 's') {
					check = 0;
				}
				else if (kitu == 'd') {
					check = 2;
				}
			}
			else if (check == 3) {
				if (kitu == 'w') {
					check = 1;
				}
				else if (kitu == 's') {
					check = 0;
				}
				else if (kitu == 'a') {
					check = 3;
				}
			}
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
		SnakeMove(a, x, y, xqua, yqua, p);
		gameover = ranChamDuoi(a);
		Sleep(100);
	}
}