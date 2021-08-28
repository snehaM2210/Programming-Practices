// Running Median
// You are given a stream of 'N' integers. For every 'i-th' integer added to the running list of integers, print the resulting median.
// Print only the integer part of the median.
// Input Format :
// The first line of input contains an integer 'N', denoting the number of integers in the stream.

// The second line of input contains 'N' integers separated by a single space.
// Output Format :
// Print the running median for every integer added to the running list in one line (space-separated).
// Input Constraints
// 0 <= N <= 10 ^ 5
// 1 <= ARR[i] <= 10 ^ 5

// Time Limit: 1 sec
// Sample Input 1 :
// 6
// 6 2 1 3 7 5
// Sample Output 1 :
// 6 4 2 2 3 4
// Explanation of Sample Output 1 :
// S = {6}, median = 6
// S = {6, 2} -> {2, 6}, median = 4
// S = {6, 2, 1} -> {1, 2, 6}, median = 2
// S = {6, 2, 1, 3} -> {1, 2, 3, 6}, median = 2
// S = {6, 2, 1, 3, 7} -> {1, 2, 3, 6, 7}, median = 3
// S = {6, 2, 1, 3, 7, 5} -> {1, 2, 3, 5, 6, 7}, median = 4
// Sample Input 2 :
// 5
// 5 4 3 2 1
// Sample Output 2 :
// 5 4 4 3 3

#include <iostream>
using namespace std;

#include <queue>
void findMedian(int *arr, int n)
{
    if (arr == NULL || arr[0] == 0)
    {
        return;
    }
    priority_queue<int, vector<int>, greater<int>> rs;
    priority_queue<int> pq;
    int m = arr[0];
    pq.push(arr[0]);
    cout << m << " ";
    for (int i = 1; i < n; i++)
    {
        int j = arr[i];
        if (pq.size() > rs.size())
        {
            //Left side heap has more elements
            if (j < m)
            {
                rs.push(pq.top());
                pq.pop();
                pq.push(j);
            }
            else
            {
                rs.push(j);
            }
            m = (pq.top() + rs.top()) / 2;
        }
        else if (pq.size() == rs.size())
        {
            //Both the heaps are balanced
            if (j < m)
            {
                pq.push(j);
                m = (int)pq.top();
            }
            else
            {
                rs.push(j);
                m = (int)rs.top();
            }
        }
        else
        {
            //Right side heap has more elements
            if (j > m)
            {
                pq.push(rs.top());
                rs.pop();
                rs.push(j);
            }
            else
            {
                pq.push(j);
            }
            m = (pq.top() + rs.top()) / 2;
        }
        cout << m << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    findMedian(arr, n);

    delete[] arr;
}
