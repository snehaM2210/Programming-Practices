// Given an array of n elements, where each element is at most k away from its target position,
// devise an algorithm that sorts in O(n log k) time. For example, let us consider k is 2, an
// element at index 7 in the sorted array, can be at indexes 6, 7, 8 in the given array.

#include <iostream>
using namespace std;
#include <queue>

void kSortedArray(int input[], int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(input[i]);
    }
    int j = 0;
    for (int i = k; i < n; i++)
    {
        input[j] = pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }
    while (!pq.empty())
    {
        input[j] = pq.top();
        pq.pop();
        j++;
    }
}

int main()
{
    int input[] = {6, 8, 2, 3, 5};
    int k = 3;
    kSortedArray(input, 5, k);
    for (int i = 0; i < 5; i++)
    {
        cout << input[i] << " ";
    }
}