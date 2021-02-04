//To take inputs in array of size 100 and the sum of the inputs taken
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int array[100];
	int i,n,sum=0;
	cout<<"Enter the no. of integers you want to add: "; 
	cin>>n;
	for(i=0;i<n;i++){
		cin>>array[i];
		sum+=array[i];
	}
	cout<<"Sum of the array is: "<<sum;
	return 0;
}
