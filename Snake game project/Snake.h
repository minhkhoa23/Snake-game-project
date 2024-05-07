#pragma once
#include <iostream>
#include <vector>
#include "lib.h"
using namespace std;
struct conran {
	vector<int> toadox;
	vector<int> toadoy;
	int sl;
};

void khoiTaoRan(conran& a);
void veConRan(const conran& a);
void SnakeMove(conran& a, int x, int y);
void xoaDuongDi(conran& a);