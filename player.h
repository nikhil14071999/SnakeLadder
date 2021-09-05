#include<iostream>
using namespace std;

class player{
	int pNo;
	string name;
	int pos;
public:
	
	player();
	player(int pNo, string name);
	int getPos();
	string getName();
	int getPlayerNo();
	bool moveTo(int position);
};