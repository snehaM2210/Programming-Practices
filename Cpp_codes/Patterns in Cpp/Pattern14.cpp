//To print a pattern of asterick as below
/*

            *
          * *
        * * *
      * * * *
    * * * * *
      * * * *
        * * *
          * *
		    *
    

*/


#include<iostream>
using namespace std;

int main(){
	int n,k=0;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
			k++;
		}
		for(int j=1;j<=i;j++){
				cout<<"* ";	
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		int k=1;
		while(k!=i+1){
			cout<<"  ";
			k++;
		}
		for(int j=n-i;j>=1;j--){
			cout<<"* ";	
		}
		cout<<endl;
	}
		return 0;
}