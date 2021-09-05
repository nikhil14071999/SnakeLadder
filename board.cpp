#include<iostream>
#include "board.h"
#include "dice.h"
using namespace std;

Board::Board(){
	d = dice(6);
	int snakes, s, e;
	cin>>snakes;
	totalPositions = 100;
	for(int i=0; i<snakes; i++){
		cin>>s>>e;
		item* it = new item(s,e,"SNAKE");
		items[s] = it;
	}
	int ladder;
	cin>>ladder;
	for(int i=0; i<ladder; i++){
		cin>>s>>e;
		item* it = new item(s,e,"LADDER");
		items[s] = it;
	}
	int playerN;
	cin>>playerN;
	string name;
	totalPlayers = playerN;
	players = vector<player*>(playerN);
	for(int i=0; i<playerN; i++){
		cin>>name;
		players[i] = new player(i, name);
	}

	cout<<"BOARD CREATED\n";
}

string Board::getPlayerNameAt(int idx){
	if(idx<players.size()){
		return players[idx]->getName();
	}
	return "INVALID";
}

void Board::playGame(){
	int winner = -1;
	int steps, tempPos, previous;
	while(winner == -1){
		for(int i=0; i<totalPlayers; i++){
			steps = d.roll();
			tempPos = players[i]->getPos() + steps;
			if( tempPos <= totalPositions){
				previous = players[i]->getPos();
				if(items.find(tempPos) == items.end()){
					players[i]->moveTo(tempPos);
				}
				else{
					players[i]->moveTo(items[tempPos]->getEnd());
				}
				cout<<getPlayerNameAt(i)<<" rolled a "<<steps<<" and moved from "<<previous<<" to "<<players[i]->getPos()<<"\n";
				if(players[i]->getPos() == totalPositions){
					winner = i;
					break;
				}

			}
		}
	}
	cout<<getPlayerNameAt(winner)<<" won the game \n";
}

Board::~Board(){
	for(int i=0; i<players.size(); i++)
		delete players[i];
	for(int i=0; i<items.size(); i++)
		delete items[i];
	cout<<"BOARD DELETED\n";
}