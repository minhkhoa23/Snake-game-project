#include "PlayerBoard.h"

void docFile(string namefile,vector <Player>& p) {
	ifstream f;
	f.open(namefile, ios::in | ios::binary);
	if (!f.is_open()) {
		cout << "Doc tap tin that bai";
		return;
	}
	else {
		f.seekg(0, ios::end);
		int num = f.tellg() / sizeof(Player);
		f.seekg(0, ios::beg);
		p.resize(num);
		for (int i = 0; i < num; i++) {
			f.read((char*)&p[i], sizeof(Player));
		}
		f.close();
	}
}

void ghiFile(string namefile, Player p) {
	ofstream f;
	f.open(namefile, ios::app | ios::binary);
	if (!f.is_open()) {
		cout << "Doc tap tin that bai";
		return;
	}
	else {
			f.write((char*)&p, sizeof(Player));
		f.close();
	}
}

void leaderBoard(vector<Player>& p) {
	docFile("Player.txt", p);
	for (int i = 0; i < p.size(); i++) {
		int vitrisau = i - 1;
		Player hientai = p[i];
		while (vitrisau >= 0 && hientai.point > p[vitrisau].point) {
			p[vitrisau + 1] = p[vitrisau];
			vitrisau--;
		}
		p[vitrisau + 1] = hientai;
	}
	cout << "Danh sach nguoi choi dan dau la: " << endl;
	for (int i = 0; i < p.size(); i++) {
		cout << p[i].name << " - " << p[i].point << endl;
	}
	_getch();
	system("cls");
}