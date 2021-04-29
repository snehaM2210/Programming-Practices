// You're given the three angles a, b, and c respectively. Now check if these three angles can form a valid triangle with an area greater than 0 or not. Print "YES"(without quotes) if it can form a valid triangle with an area greater than 0, otherwise print "NO" (without quotes).

// Input:
// First-line will contain three numbers a, b, and c separated by space.
// Output:
// Print "YES"(without quotes) if these sides can form a valid triangle, otherwise print "NO" (without quotes).

// Constraints
// 0≤a,b,c≤180
// Sample Input 1:
// 20 40 120
// Sample Output 1:
// YES
// Sample Input 2:
// 100 18 42
// Sample Output 2:
// NO
// EXPLANATION:
// In the first example, angles set (20, 40, 120) can form a triangle with an area greater than 0.
// In the second example, angles set (100, 18, 42) will never form a valid triangle.

#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	if(a<=180 && b<=180 && c<=180){
	if(a+b+c==180 && a != 0 && b != 0 && c != 0){
	   cout<<"YES";
	}
	else{
	   cout<<"NO";
	}
	}
	return 0;
}
