// You are asked to calculate factorials of some small positive integers.

// Input
// An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

// Output
// For each integer n given at input, display a line with the value of n!

// Example
// Sample input:
// 4
// 1
// 2
// 5
// 3
// Sample output:

// 1
// 2
// 120
// 6


#include <iostream>
//#include<boost/multiprecision/cpp_int.hpp>   //Use this in codechef otherwise the code
//using namespace boost::multiprecision;       //gives error
using namespace std;

int main() {
	//No. of test cases
	unsigned int T;
	cin>>T;
	while(T--){
	    //Input no.s to find factorial
	    int n;
	    int m=1;   //cpp_int m=1;
	    cin>>n;
	    for(int i=n;i>0;i--){
	        m*=i;
	    }
	    //Factorial output
	    cout<<m<<endl;
	}
	return 0;
}
