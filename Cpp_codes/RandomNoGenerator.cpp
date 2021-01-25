#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));//srand taken to get random no. when prgramme is run at diff times
				   //time=0 calculates random as seconds are changing at every time
	for(int x=1;x<25;x++){
		cout<<1+(rand()%6)<<endl;//'%6' is done to get single digit random no.
	}
	return 0;
}
