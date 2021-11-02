// Matrix Chain Multiplication
// Given a chain of matrices A1, A2, A3,.....An, you have to figure out the most efficient way to multiply these matrices. In other words, determine where to place parentheses to minimize the number of multiplications.
// You will be given an array p[] of size n + 1. Dimension of matrix Ai is p[i - 1]*p[i]. You need to find minimum number of multiplications needed to multiply the chain.
// Input Format:
// The first line of input contains an integer, that denotes the value of n. The following line contains n+1 integers, that denote the value of elements of array p[].
// Output Format:
// The first and only line of output prints the minimum number of multiplication needed.
// Constraints :
// 1 <= n <= 100
// Time limit: 1 second
// Sample Input 1:
// 3
// 10 15 20 25
// Sample Output 1:
// 8000
// Sample Output Explanation:
// There are two ways to multiply the chain - A1*(A2*A3) or (A1*A2)*A3.
// If we multiply in order- A1*(A2*A3), then number of multiplications required are 11250.
// If we multiply in order- (A1*A2)*A3, then number of multiplications required are 8000.
// Thus minimum number of multiplications required are 8000.

#include <iostream>
using namespace std;

#include <climits>
int matrixChainMultiplication(int *arr, int n)
{
    n++;
    int m[n][n];
    int i, j, k, t, q; //t is the chain length
    for (i = 1; i < n; i++)
        m[i][i] = 0; // cost=0 when multiplying one matrix.

    for (t = 2; t < n; t++)
    {
        for (i = 1; i < n - t + 1; i++)
        {
            j = i + t - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    return m[1][n - 1];
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    cout << matrixChainMultiplication(arr, n);

    delete[] arr;
}