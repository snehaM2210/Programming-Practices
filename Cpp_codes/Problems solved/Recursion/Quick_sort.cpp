// Quick Sort Code
// Sort an array A using Quick Sort.
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
// 1 5 2 7 3
// Sample Output 2 :
// 1 2 3 5 7

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int input[], int s, int e)
{
    int p = input[e];
    int q = s - 1;
    for (int r = s; r <= e - 1; r++)
    {
        if (input[r] <= p)
        {
            q++;
            swap(&input[q], &input[r]);
        }
    }
    swap(&input[q + 1], &input[e]);
    return (q + 1);
}
void qs(int input[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int m = partition(input, s, e);
    qs(input, s, m - 1);
    qs(input, m + 1, e);
}
void quickSort(int input[], int size)
{
    qs(input, 0, size - 1);
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    quickSort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
}
