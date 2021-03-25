// C++ program to find the min and max element
// of Array using sort() in STL
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Get the array
    int k;
	cin>>k;//k=sizeOfArray
    int arr[k],i;
    for(i=0;i<k;i++){
    cin>>arr[i];
	}
 
    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    // Find the minimum element
    cout << "\nMin Element = "
         << *min_element(arr, arr + n);
 
    // Find the maximum element
    cout << "\nMax Element = "
         << *max_element(arr, arr + n);
    return 0;
}
