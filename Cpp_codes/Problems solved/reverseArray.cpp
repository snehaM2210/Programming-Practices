// Iterative C++ program to reverse an array

#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
 
/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
 
/* Driver function */
int main()
{
	int k;
	cin>>k;//k=sizeOfArray
    int arr[k],i;
    for(i=0;i<k;i++){
    cin>>arr[i];
	}
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array is:" << endl;
 
    // To print original array
    printArray(arr, n);
     
    // Function calling
    reverseArray(arr, 0, n-1);
     
    cout << "Reversed array is:" << endl;
     
    // To print the Reversed array
    printArray(arr, n);
     
    return 0;
}
