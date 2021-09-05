#include<iostream>
#include "player.h"
using namespace std;

player::player(){
	pNo = -1, name = "INVALID", pos = -1;
}
player::player(int no, string pName){
	name = pName;
	pNo = no;
	pos = 0;
}

int player::getPlayerNo(){
	return pNo;
}
string player::getName(){
	return name;
}
int player::getPos(){
	return pos;
}

bool player::moveTo(int position){
	pos = position;
	if(pos == 100)
		return true;
	return false;
}