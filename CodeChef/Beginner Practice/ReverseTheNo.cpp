// Given an Integer N, write a program to reverse it.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, display the reverse of the given number N, in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Example
// Input
// 4
// 12345
// 31203
// 2123
// 2300
// Output
// 54321
// 30213
// 3212
// 32

#include <iostream>
using namespace std;

int main() {
	// enter all test cases
	int T; 
	cin>>T;
	while(T--){
	    int n,i,m=0;
	    cin>>n;
	    while(n>0){
	        i=n%10;
	        m=m*10+i;
	        n=n/10;
	    }
	        cout<<m<<endl;
	}
	return 0;
}
