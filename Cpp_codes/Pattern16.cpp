//To print a pattern of asterick as below
/*
Taking n=4,you can print the following pattern

            1
          1 2 3
		1 2 3 4 5
	  1	2 3 4 5 6 7
	1 2 3 4 5 6 7 8 9
            
*/


#include<iostream>
using namespace std;
  int main(){
	int i,j,n,k=0;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){    
		for(j=1;j<=n-i;j++){
			cout<<"  ";
		}	
		for(j=1;j<=(2*i)-1;j++){
			cout<<j<<" ";
		}
		cout<<endl;    
	}    
	return 0;
}