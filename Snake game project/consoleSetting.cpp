#include "consoleSetting.h"

void veTuong() {
	int x = 0;
	int y = 0;
	while (x < 101) {
		gotoXY(x, y);
		cout << "+";
		x++;
	}
	while (y < 28) {
		gotoXY(x, y);
		cout << "+";
		y++;
	}
	while (x >= 0) {
		gotoXY(x, y);
		cout << "+";
		x--;
	}
	x = 0;
	y = 0;
	while (y < 28) {
		gotoXY(x, y);
		cout << "+";
		y++;
	}
}