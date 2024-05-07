#include "Snake.h"

void khoiTaoRan(conran &a) {
	int x = 50, y = 12;
	for (int i = 0; i < a.sl; i++) {
		a.toadox.push_back(x);
		a.toadoy.push_back(y);
		x--;
	}
}


void veConRan(const conran &a) {
	for (int i = 0; i < a.sl; i++) {
		gotoXY(a.toadox[i], a.toadoy[i]);
		if (i == 0) {
			cout << "0";
		}
		else {
			cout << "o";
		}
	}
}

void SnakeMove(conran &a, int x, int y) {
	for (int i = a.sl - 1; i > 0; i--) {
		a.toadox[i] = a.toadox[i - 1];
		a.toadoy[i] = a.toadoy[i - 1];
	}
	a.toadox[0] = x;
	a.toadoy[0] = y;
	veConRan(a);
}

void xoaDuongDi(conran& a) {
	for (int i = 0; i < a.sl; i++) {
		gotoXY(a.toadox[i], a.toadoy[i]);
		cout << " ";
	}
}