//Fibonacci Series using array
#include<iostream>
using namespace std;

int main(){
	int n,arr[100];
	cout<<"Enter the no. of Fibonacci terms: ";
	cin>>n;
	arr[0]=0;
	arr[1]=1;
	cout<<"Fibonacci Series: ";
	cout<<arr[0]<<" "<<arr[1]<<" ";
	for(int i=2;i<n;i++){
		arr[i]=arr[i-1]+arr[i-2];
		cout<<arr[i]<<" ";
	}
	cout<<endl;	
	return 0;
}
