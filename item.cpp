#include "item.h"
#include <iostream>
using namespace std;

item::item(){
	start = -1, end = -1;
}

item::item(int s, int e, string Type){
	start =s, end = e, type  = Type;
}

int item::getStart(){
	return start;
}

int item::getEnd(){
	return end;
}

string item::getType(){
	return type;
}



