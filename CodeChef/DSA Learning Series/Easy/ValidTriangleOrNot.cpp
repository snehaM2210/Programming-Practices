// You're given the length of three sides a, b, and c respectively. Now check if these three sides can form a triangle or not. Print "YES"(without quotes) if it can form a valid triangle with an area greater than 0, otherwise print "NO" (without quotes).

// Input:
// First-line will contain three numbers a, b, and c separated by space.
// Output:
// Print "YES"(without quotes) if these sides can form a valid triangle, otherwise print "NO" (without quotes).

// Constraints
// 1≤a,b,c≤106
// Sample Input 1:
// 2 4 3
// Sample Output 1:
// YES
// Sample Input 2:
// 1 1 4
// Sample Output 2:
// NO
// EXPLANATION:
// In the first example, (2, 4, 3) can form a triangle with an area greater than 0.
// In the second example, (1, 1, 4) will never form a valid triangle.

#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && b+c>a && c+a>b){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	return 0;
}
