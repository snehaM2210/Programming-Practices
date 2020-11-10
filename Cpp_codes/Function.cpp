//Functions -Using fuctions print a pattern
//Basic fundamental of using functions

#include<iostream>
using namespace std;

void pattern(){
	int n;
	cout<<"Enter the no. of Rows: ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
	cout<<endl;	
	}
} 

int main(){
	pattern();//to print a pattern for 1st time
	pattern();//to print 2nd time
	pattern();//3rd time
	pattern();//4th time...and so on..as required.
	return 0;
}