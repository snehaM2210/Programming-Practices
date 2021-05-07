// Given an Integer N, write a program to reverse it.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, display the reverse of the given number N, in a new line.

// Constraints (IMPORTANT)
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

void reverse_no(int t){
    int reverse=0, rem;
    while(t!=0){    
     rem=t%10;      
     reverse=reverse*10+rem;    
     t=t/10;    
  } 
    cout<<reverse<<endl; 
}

int main() {
	int n;
	cin>>n;
	if(n>0 && n<1001){
	while(n--){
	    int t;
	    cin>>t;
	    if(t>0 && t<1000001){
	        reverse_no(t);
	    }
	}
	}
	return 0;
}