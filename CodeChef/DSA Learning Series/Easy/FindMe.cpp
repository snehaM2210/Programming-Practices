// You are given a list of N integers and a value K. Print 1 if K exists in the given list of N integers, otherwise print −1.

// Input:
// First-line will contain two numbers N and K.
// Next line contains N space-separated numbers.
// Output:
// Print the answer in a new line.

// Constraints
// 1≤N,K,Ai≤105
// Sample Input 1:
// 4 2
// 1 2 3 4
// Sample Output 1:
// 1
// Sample Input 2:
// 4 4
// 1 2 6 9
// Sample Output 2:
// -1
// EXPLANATION:
// In the first example, as 2 is present in the list.
// In the second example, 4 is not present in the list.

#include <iostream>
using namespace std;

void findme(int *arr,int n,int k){
	for(int i=0;i<n;i++){
	    if(arr[i]==k){
	        cout<<"1";
	        return;
	    }
	}
	cout<<"-1";
}
int main() {
    int n,k,i;
	cin >> n >> k;
	int *arr = new int[n];
	for(i=0;i<n;++i){
		cin >> arr[i];
	}
	findme(arr,n,k);
	delete [] arr;
	return 0;
}