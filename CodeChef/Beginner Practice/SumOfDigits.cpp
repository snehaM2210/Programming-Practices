// You're given an integer N. Write a program to calculate the sum of all the digits of N.

// Input
// The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, calculate the sum of digits of N, and display it in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Example
// Input
// 3 
// 12345
// 31203
// 2123
// Output
// 15
// 9
// 8

#include <iostream>
using namespace std;

int main() {
	//Input for no. of test cases
	int T;
	cin>>T;
	while(T--){
	    //Digits taken as input
	    int n,add=0;
	    cin>>n;
	    //To print out the sum of digits   
	    while(n>0){
	        add=add+(n%10);
	        n=n/10;
	    }
	    //Output 
	    cout<<add<<endl;
	}
	return 0;
}

