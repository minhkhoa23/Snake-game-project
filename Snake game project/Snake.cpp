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

void SnakeMove(conran &a, int& x, int& y, int& xqua, int& yqua, Player& p) {
	if (ranAnQua(a, xqua, yqua) == false) {
		for (int i = a.sl - 1; i > 0; i--) {
			a.toadox[i] = a.toadox[i - 1];
			a.toadoy[i] = a.toadoy[i - 1];
		}
		a.toadox[0] = x;
		a.toadoy[0] = y;
		RanXuyenTuong(a,x,y);
		veConRan(a);
	}
	else {
		a.sl++;
		a.toadox.resize(a.toadox.size() + 1);
		a.toadoy.resize(a.toadoy.size() + 1);
		for (int i = a.sl - 1; i > 0; i--) {
			a.toadox[i] = a.toadox[i - 1];
			a.toadoy[i] = a.toadoy[i - 1];
		}
		a.toadox[0] = x;
		a.toadoy[0] = y;
		p.point++;
		RanXuyenTuong(a,x,y);
		veConRan(a);
		taoQua(xqua, yqua, a);
	}
	
}
	

void xoaDuongDi(conran& a) {
	for (int i = 0; i < a.sl; i++) {
		gotoXY(a.toadox[i], a.toadoy[i]);
		cout << " ";
	}
}

bool ranChamTuong(int x0, int y0) {
	if (y0 == 1 && (x0 >= 11 && x0 <= 100)) {
		return true;
	}
	else if (y0 == 27 && (x0 >= 11 && x0 <= 100)) {
		return true;
	}
	else if (x0 == 100 && (y0 >= 1 && y0 <= 27)) {
		return true;
	}
	else if (x0 == 11 && (y0 >= 1 && y0 <= 27)) {
		return true;
	}
	return false;
}

bool ranChamDuoi(conran a) {
	for (int i = 1; i < a.sl; i++) {
		if ((a.toadox[0] == a.toadox[i]) && (a.toadoy[0] == a.toadoy[i])) {
			return true;
		}
	}
	return false;
}

bool kiemTraRan(conran a) {
	if (!ranChamDuoi(a) && !ranChamTuong(a.toadox[0], a.toadoy[0])) {
		return false;
	}
	else {
		return true;
	}
}

// 12 <= x <= 99
// 2 <= y <= 26
void taoQua(int& xqua, int& yqua, conran a) {
	do {
		xqua = rand() % (99 - 12 + 1) + 12;
		yqua = rand() % (26 - 2 + 1) + 2;
	} while (kiemtraRanDeQua(a, xqua, yqua) == true);
	gotoXY(xqua, yqua);
	cout << "@";
}

bool kiemtraRanDeQua(conran a, int xqua, int yqua) {
	for (int i = 0; i < a.sl; i++) {
		if (xqua == a.toadox[i] && yqua == a.toadoy[i]) {
			return true;
		}
	}
	return false;
}

bool ranAnQua(conran a, int xqua, int yqua) {
	if (a.toadox[0] == xqua && a.toadoy[0] == yqua) {
		return true;
	}
	return false;
}

void RanXuyenTuong(conran& a, int& x, int& y) {
		if (a.toadox[0] >= 101) { 
			a.toadox[0] = 11;
			x = 11;
		}
		else if (a.toadox[0] <= 10) {
			a.toadox[0] = 100;
			x = 100;
		}
		else if (a.toadoy[0] >= 28) { 
			a.toadoy[0] = 1;
			y = 1;
		}
		else if (a.toadoy[0] <= 0) {
			a.toadoy[0] = 27;
			y = 27;
		}
}