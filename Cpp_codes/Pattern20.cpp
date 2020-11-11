//To print a pattern of asterick as below(Pascal's Triangle)
/*
Taking n=5,you can print the following pattern

            1
          1 2 1
		1 2 3 2 1
	  1	2 3 4 3 2 1
	1 2 3 4 5 4 3 2 1
  1	2 3 4 5 6 5 4 3 2 1
            
*/


#include<iostream>
using namespace std;
  int main(){
	int i,j,n,k,m;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){    	
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(k=1;k<=i;k++){
			cout<<k;
		}
		for(m=i-1;m>=1;m--){
			cout<<m;
		}    
		cout<<endl;
	}    
	return 0;
}