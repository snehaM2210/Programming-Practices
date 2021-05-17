// Merge Sort Code
// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)
// Output format :
// Array elements in increasing order (separated by space)
// Constraints :
// 1 <= n <= 10^3
// Sample Input 1 :
// 6
// 2 6 8 5 4 3
// Sample Output 1 :
// 2 3 4 5 6 8
// Sample Input 2 :
// 5
// 2 1 5 2 3
// Sample Output 2 :
// 1 2 2 3 5

#include <iostream>
using namespace std;
#include <cstring>
void merge(int input[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = input[start + i];

    for (int j = 0; j < n2; j++)
        R[j] = input[mid + 1 + j];

    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            input[k++] = L[i++];
        else
            input[k++] = R[j++];
    }
    while (i < n1)
        input[k++] = L[i++];
    while (j < n2)
        input[k++] = R[j++];
}
void mergeSorted(int input[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;

    mergeSorted(input, start, mid);
    mergeSorted(input, mid + 1, end);
    merge(input, start, mid, end);
}
void mergeSort(int input[], int size)
{

    mergeSorted(input, 0, size - 1);
}

int main()
{
    int length;
    cin >> length;
    int *input = new int[length];
    for (int i = 0; i < length; i++)
        cin >> input[i];
    mergeSort(input, length);
    for (int i = 0; i < length; i++)
    {
        cout << input[i] << " ";
    }
}