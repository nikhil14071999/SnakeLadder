 #include<iostream>
 using namespace std;
 class item{
	int start;
	int end;
protected:
	string type;
public:
	item();
	item(int s, int e, string);
	int getStart();
	int getEnd();
	string getType();
};
