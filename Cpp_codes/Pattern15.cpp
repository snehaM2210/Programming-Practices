//To print a pattern of asterick as below
/*
Taking n=4,you can print the following pattern

    * * *   * * *
    * *       * *
    *           *
	
	*           *
	* *       * *
	* * *   * * *

*/

/*
#include<iostream>
using namespace std;
  int main(){
	int i,j,n,k=0;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(i=1,k=0;i<=n;i++,k=0){    
		for(j=1;j<=(n-i);j++){
			cout<<"* ";
		}
		while(k!=(2*i)-1){
			cout<<"  ";
			k++;
		}
		for(j=n-i;j>=1;j--){
			cout<<"* ";
		}	
		cout<<endl;    
	}    
	for(i=n-1,k=0;i>=1;i--,k=0){
		for(j=1;j<=n-i;j++){
			cout<<"* ";
		}
		while(k!=(2*i)-1){
			cout<<"  ";
			k++;
		}
		for(j=n-i;j>=1;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
*/




//ANOTHER METHOD TO DO THE ABOVE QUESTION...

/*
Taking n=7

    * * *  * * *
    * *      * *
    *          *
	
	*          *
	* *      * *
	* * *  * * *

*/
#include<iostream>
using namespace std;
int main(){
	int i,j,n,k;
	cout<<"Enter value of n: ";
	cin>>n;
	for(i=0;i<=n/2;i++){
		for(j=0;j<n;j++){
			if((j>=(n/2)-i)&&(j<=(n/2)+i))
				cout<<"  ";
			else
				cout<<"* ";	
		}
		cout<<endl;
	}
	for(i=0;i<n/2;i++){
		for(j=0;j<n;j++){
			if((j<=i)||(j>=(n-i-1)))
				cout<<"* ";
			else
				cout<<"  ";	
		}
		cout<<endl;
	}
	return 0;
}