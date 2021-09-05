#include<iostream>
#include "board.h"
using namespace std;

int main(){
	int nextGame = 0;
	do{
		Board b;

		b.playGame();
		cout<<"Press 1 to start a new game";
		cin>>nextGame;
	}while(nextGame == 1);
	return 0;
}