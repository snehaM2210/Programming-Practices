// You're given a number N. Print the first N lines of the below-given pattern.

// 1 2 3 4 5
// 10 9 8 7 6
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25
// 30 29 28 27 26
// Input:
// First-line will contain the number N.
// Output:
// Print the first N lines of the given pattern.

// Constraints
// 1≤N≤200
// Sample Input 1:
// 4
// Sample Output 1:
// 1 2 3 4 5
// 10 9 8 7 6
// 11 12 13 14 15
// 20 19 18 17 16
// Sample Input 2:
// 2
// Sample Output 2:
// 1 2 3 4 5
// 10 9 8 7 6
// EXPLANATION:
// In the first example, we'll print the first 4 lines of the given pattern.
// In the second example, we'll print the first 2 lines of the given pattern.

#include<iostream>
using namespace std;

int main(){
    int n,col=5,i,j,k; //n=row
    cin>>n;
    k = 1;
    if(n>0 && n<201){
    for(i=1; i<=n; i++){
        if(i%2!=0){
            for(j=1; j<=col; j++, k++){
                cout<<k<<" ";
            }
            cout<<endl;
        }else{
            int x=k;
            for(j=k+4; j>=x; j--,k++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    }
    return 0;
}