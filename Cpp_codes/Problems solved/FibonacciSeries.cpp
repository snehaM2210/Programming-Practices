//Fibonacci Series without using array
#include<iostream>
using namespace std;

int main(){
	int i,n,a=0,b=1,c;
	cout<<"Enter the no. of Fibonacci terms: ";
	cin>>n;
	cout<<"Fibonacci Series: ";
	cout<<a<<" "<<b<<" ";
	for(i=2;i<n;i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	cout<<endl;
	return 0;
}