// You're given a number N. Print the first N lines of the below-given pattern.

//     *
//    **
//   ***
//  ****
// *****
// Input:
// First-line will contain the number N.
// Output:
// Print the first N lines of the given pattern.

// Constraints
// 1≤N≤200
// Sample Input 1:
// 4
// Sample Output 1:
//    *
//   **
//  ***
// ****
// Sample Input 2:
// 2
// Sample Output 2:
//  *
// **
// EXPLANATION:
// In the first example, we'll print the first 4 lines of the given pattern.
// In the second example, we'll print the first 2 lines of the given pattern.

#include <iostream>
using namespace std;

int main() {
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
	    for(k=n;k>i;k--){
	        cout<<" ";
	    }
	    for(j=1;j<=i;j++){
	        cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}