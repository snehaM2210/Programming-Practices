// Code: Knapsack (Memoization and DP)
// A thief is robbing a store and can carry a maximal weight of W into his knapsack. There are N items and ith item weighs wi and is of value vi. Considering the constraints of maximum weight that knapsack can carry, you have to find and return the maximum value that thief can generate by stealing items.
// Note
// Space complexity should be O(W).
// Input Format :
// The first line contains an integers, that denote the value of N. The following line contains N space separated integers, that denote the values of weight of items. The following line contains N space separated integers, that denote the values associated with the items. The following line contains an integer that denote the value of W. W denotes maximum weight that thief can carry.
// Output Format :
// The first and only line of output contains the maximum value that thief can generate, as described in the task.
// Constraints
// 1 <= N <= 10^4
// 1<= wi <= 100
// 1 <= vi <= 100
// Time Limit: 1 second
// Sample Input 1 :
// 4
// 1 2 4 5
// 5 4 8 6
// 5
// Sample Output 1 :
// 13

#include <cstring>
#include <iostream>
using namespace std;

#include <string>
int knapsack(int *weight, int *value, int n, int maxWeight)
{
    int matrix[2][maxWeight + 1];
    memset(matrix, 0, sizeof(matrix));
    int i = 0;
    while (i < n)
    {
        int j = 0;
        j <= maxWeight;
        if (i % 2 != 0)
        {
            while (++j <= maxWeight)
            {
                if (weight[i] <= j)
                {
                    matrix[1][j] = max(value[i] + matrix[0][j - weight[i]], matrix[0][j]);
                }
                else
                {
                    matrix[1][j] = matrix[0][j];
                }
            }
        }
        else
        {
            while (++j <= maxWeight)
            {
                if (weight[i] <= j)
                {
                    matrix[0][j] = max(value[i] + matrix[1][j - weight[i]], matrix[1][j]);
                }
                else
                {
                    matrix[0][j] = matrix[1][j];
                }
            }
        }
        i++;
    }
    return (n % 2 != 0) ? matrix[0][maxWeight] : matrix[1][maxWeight];
}

int main()
{
    int n;
    cin >> n;
    int *wt = new int[n];
    int *val = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> val[j];
    }

    int w;
    cin >> w;

    cout << knapsack(wt, val, n, w) << "\n";

    delete[] wt;
    delete[] val;
}