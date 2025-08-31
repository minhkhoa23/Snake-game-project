#include "consoleSetting.h"

void veTuong() {
	int x = 10;
	int y = 0;
	SetColor(3);
	while (x < 101) {
		gotoXY(x, y);
		cout << "+";
		x++;
	}
	SetColor(4);
	while (y < 28) {
		gotoXY(x, y);
		cout << "+";
		y++;
	}
	SetColor(5);
	while (x >= 10) {
		gotoXY(x, y);
		cout << "+";
		x--;
	}
	x = 10;
	y = 0;
	SetColor(6);
	while (y < 28) {
		gotoXY(x, y);
		cout << "+";
		y++;
	}
	SetColor(7);
}

void getInfoPlayer(Player& p) {
	gotoXY(50, 12);
	cout << "HAY NHAP TEN NGUOI CHOI: ";
	gotoXY(52, 13);
	getline(cin, p.name);
	p.point = 0;
	system("cls");
}