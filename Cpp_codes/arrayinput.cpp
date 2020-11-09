//Program to take inputs in an array

#include<iostream>
using namespace std;

int main(){
	int arr[10];//for array size 10
	for(int i=0;i<10;i++){
		cout<<"Enter elements: ";
		cin>>arr[i];//to take input
	}
	cout<<"\nEntered elements in array are:\n";
	for(int i=0;i<=10;i++){
		cout<<arr[i]<<" ";//to display output
	}
	return 0;
}