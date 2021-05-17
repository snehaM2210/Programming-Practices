// An Interesting Sequence
// Zanka finds fun in everyday simple things. One fine day he got interested in a very trivial sequence. Given a natural number k, he considers the sequence Ai=k+i2 so that the terms are

// k+1,k+4,k+9,k+16,…
// Now to make things more interesting, he considers the gcd of consecutive terms in the sequence, then takes the sum of the first 2k values. More formally, he wants to compute

// ∑i=12kgcd(Ai,Ai+1)
// Denote this sum by S. Zanka wants you to print the number S for each k.

// Input
// The first line contains an integer T, the number of test cases. Descriptions of test cases follow.
// The only line of each test case contains a single integer k.
// Output
// For each test case, output a single line containing the sum S for the given k.

// Constraints
// 1≤T≤106
// 1≤k≤106
// Subtasks
// Subtask #1 (20 points): t≤103,k≤103
// Subtask #2 (80 points): Original Constraints

// Sample Input
// 1
// 1
// Sample output
// 6
// Explanation
// The first 2k+1 terms of the sequence A are 2,5,10.

// So the answer is gcd(2,5)+gcd(5,10)=1+5=6

#include <bits/stdc++.h>
#define M 4000005
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int input[M], sum[M];
    for (int x = 0; x < M; x++)
    {
        input[x] = x;
        sum[x] = 0;
    }
    for (int a = 2; a < M; a++)
    {
        if (input[a] == a)
        {
            input[a] = a - 1;
            for (int i = 2 * a; i < M; i += a)
            {
                input[i] = (input[i] / a) * (a - 1);
            }
        }
    }
    for (int c = 1; c < M; c++)
    {
        sum[c] += c - 1;
        for (int j = 2 * c; j < M; j += c)
        {
            sum[j] += c * ((1 + input[j / c]) / 2);
        }
    }
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int p;
        cin >> p;
        cout << sum[4 * p + 1];
        cout << "\n";
    }
    return 0;
}