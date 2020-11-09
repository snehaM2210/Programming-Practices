//To print a pattern of asterick as below
/*

         *
        * *
       * * *
      * * * *
     * * * * *

*/


#include<iostream>
using namespace std;

int main(){
	int n,k=0;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
			k++;
		}
		for(int j=1;j<=(2*i)-1;j++){
			if((j%2)==0)
				cout<<" ";
			else
				cout<<"*";	
		}
		cout<<endl;
	}
	return 0;
}