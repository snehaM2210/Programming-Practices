//To find whether a no. is prime or not
#include<iostream>
using namespace std;

int main(){
	int i,n;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=2;i<n/2;i++){//Taking n/2 to make the loops run short
		cout<<i<<endl;//to check where it breaks
		if(n%i==0){
			cout<<"The number is not a prime no.";
			break;
		}
	}
	if(i==n/2){
		cout<<"The number is a prime no.";
	}
	return 0;
}