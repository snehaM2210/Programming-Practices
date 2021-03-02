// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

// Input
// The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three angles A, B and C, of the triangle separated by space.

// Output
// For each test case, display 'YES' if the triangle is valid, and 'NO', if it is not, in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A,B,C ≤ 180
// Example
// Input

// 3 
// 40 40 100
// 45 45 90
// 180 1 1
// Output

// YES
// YES
// NO

#include <iostream>
using namespace std;

int main() {
	// no. of test cases
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    if(A+B+C==180){
	    if(A<=180 && B<=180 && C<=180){
	        cout<<"YES"<<endl;
	    }
	    }
	    else
	    cout<<"NO"<<endl;
	    }
	return 0;
}
