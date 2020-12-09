//To print a pattern of asterick as below(Pascal's Triangle)
/*
Taking n=5,you can print the following pattern

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
            
*/

#include<iostream>
using namespace std;

int main(){
	int n,k=0,l=0,m=0;
	cout<<"Enter no. of rows: ";
	cin>> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
			k++;
		}
		while(m!=(2*i)-1){
			if(k<=n-1){
				cout<<i+m<<" ";
				k++;
			}
			else{
				++l;
				cout<<i+m-(2*l)<<" ";
			}
			++m;
		}
		l=k=m=0;
		cout<<endl;
	}
	return 0;
}