#pragma once
#include "lib.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct Player {
	string name;
	int point;
};

void docFile(string namefile, vector <Player>& p);
void ghiFile(string namefile, Player p);
void leaderBoard(vector<Player>& p);