//To print a pattern of asterick as below(Pascal's Triangle)
/*
Taking n=5,you can print the following pattern

A
B B
C C C
D D D D
E E E E E
            
*/

#include<iostream>
using namespace std;

int main(){
	char n;
	char alphabet='A';
	cout<<"Enter the uppercase letter to print in the last row: ";
	cin>>n;
	for(int i=1;i<=(n-'A'+1);i++){
		for(int j=1;j<=i;j++){
			cout<<alphabet<<" ";
		}
		alphabet++;
		cout<<endl;
	}
	return 0;
}