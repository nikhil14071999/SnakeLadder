#include "dice.h"
#include <iostream>
#include <time.h>
using namespace std;

dice::dice(){
	noOfFaces = 0;
}

dice::dice(int n){
	noOfFaces = n;
	srand(time(0));
}

int dice::roll(){
	return rand()%noOfFaces+1;
}