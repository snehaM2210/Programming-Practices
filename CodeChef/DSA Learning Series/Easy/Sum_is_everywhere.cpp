// You are given a number N and find the sum of the first N odd and even numbers in a line separated by space. All even and odd numbers should be greater than 0.

// Input:
// First-line will contain the number N.
// Output:
// Print the sum of the first N odd and even numbers in a line separated by space.

// Constraints
// 1≤N≤106
// Sample Input 1:
// 4
// Sample Output 1:
// 16 20
// Sample Input 2:
// 1
// Sample Output 2:
// 1 2
// EXPLANATION:
// In the first example, (1 + 3 + 5 + 7) = 16 and (2 + 4 + 6 + 8) = 20.
// In the second example, only one odd that is 1 and only one even that is 2.

#include <iostream>
using namespace std;

long int sum_even(long int n)
{
    return (n * (n + 1));
}
long int sum_odd(long int n)
{
    return (n * n);
}

int main() {
	long int n;
	cin>>n;
	cout<<sum_odd(n)<<" "<<sum_even(n);
	return 0;
}