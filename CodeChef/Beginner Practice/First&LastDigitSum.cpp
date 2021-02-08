// If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

// Input
// The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, display the sum of first and last digits of N in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Example
// Input
// 3 
// 1234
// 124894
// 242323

// Output
// 5
// 5
// 5

#include <bits/stdc++.h>
using namespace std;

int main() {
	// input tests cases
	int T,i,l,f;
	cin>>T;
	while(T--){
	    cin>>i;
	    l=i%10;
	    while(i>0){
	        f=i%10;
	        i=i/10;
	    }
	    cout<<l+f<<endl;
	}
	return 0;
}