//To print a pattern of asterick as below(Pascal's Triangle)
/*
Taking n=5,you can print the following pattern

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
            
*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter no. of rows: ";
	cin>> n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}