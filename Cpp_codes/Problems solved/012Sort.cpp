// C++ program to sort an array of 0s, 1s and 2s in a linear time complexity
#include <bits/stdc++.h>
using namespace std;

// Function to sort the input array having values {0, 1, 2}
void dnfSort(int a[], int n)
{
    int lo = 0;
    int hi = n - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (a[mid])
        {

        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;

        // If the element is 1
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    cout << "\n";
    cout << "\n";
}

// Driver Code
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    dnfSort(arr, n);
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "Array after DNF sorting: ";
    printArray(arr, n);
    return 0;
}