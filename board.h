#include<iostream>
#include "item.h"
#include "player.h"
#include <unordered_map>
#include<vector>
#include "dice.h" 
using namespace std;

class Board{
	int totalPositions;
	int totalPlayers;
	unordered_map<int, item*> items; 
	vector<player*> players;
	dice d;
public:
	Board();
	~Board();
	string getPlayerNameAt(int idx);
	void playGame();
};