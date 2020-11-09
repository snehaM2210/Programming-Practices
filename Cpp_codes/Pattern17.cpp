//To print a pattern of asterick as below
/*
Taking n=10,you can print the following pattern

            		0
          	  	  9 0 9
				8 9 0 9 8
		  	  7	8 9 0 9 8 7
			6 7 8 9 0 9 8 7 6
	  	  5 6 7 8 9 0 9 8 7 6 5
		4 5 6 7 8 9 0 9 8 7 6 5 4
  	  3 4 5	6 7 8 9 0 9 8 7 6 5 4 3 
	2 3 4 5	6 7 8 9 0 9 8 7 6 5 4 3 2 
  1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1        

*/


#include<iostream>
using namespace std;
  int main(){
	int i,j,n,k=0;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){    
		for(j=1;j<=n;j++){
			if(j>n-i){
				cout<<j%10<<" ";
			}
			else
				cout<<"  ";
		}	
		for(j=1;j<i;j++){
			cout<<n-j<<" ";
		}
		cout<<endl;    
	}    
	return 0;
}