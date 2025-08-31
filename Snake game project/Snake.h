#pragma once
#include <iostream>
#include <vector>
#include "PlayerBoard.h"
#include "lib.h"
#include <string>
using namespace std;
struct conran {
	vector<int> toadox;
	vector<int> toadoy;
	int sl;
};



void khoiTaoRan(conran& a);
void veConRan(const conran& a);
void SnakeMove(conran& a, int& x, int& y, int& xqua, int& yqua, Player& p);
void xoaDuongDi(conran& a);
bool ranChamTuong(int x0, int y0);
bool ranChamDuoi(conran a);
bool kiemTraRan(conran a);
void taoQua(int& xqua, int& yqua, conran a);
bool kiemtraRanDeQua(conran a, int xqua, int yqua);
bool ranAnQua(conran a, int xqua, int yqua);
void RanXuyenTuong(conran& a, int& x, int& y);
