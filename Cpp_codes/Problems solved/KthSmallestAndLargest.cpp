// Simple C++ program to find k'th smallest and largest element
#include <algorithm>
#include <iostream>
using namespace std;
 
// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);
 
    // Return k'th element in the sorted array
    return arr[k - 1];
}

// Function to return k'th largest element in a given array
int kthLargest(int arr[], int n, int k)
{
	/*// Sort the array in descending order
	sort(arr, arr + n, greater<int>());
  
    // Print the sorted array
    for (int i = 0; i < k; i++){
        arr[k];
		}
        cout<<k+1<<endl;*/
        //OR
        
    // Sort the array 
	sort(arr, arr + n );
	//Return k'th element in the sorted array
	return arr[n-k];
}
 
// Driver program to test above methods
int main()
{
    // Get the array
    int j;
	cin>>j;//j=sizeOfArray
    int arr[j],i;
    for(i=0;i<j;i++){
    cin>>arr[i];
	}
    int n = sizeof(arr) / sizeof(arr[0]),k;
    cout<<"Enter K:";
    cin>>k;
    cout << "\nK'th smallest element is: " << kthSmallest(arr, n, k);
    cout << "\nK'th largest element is: "<<kthLargest(arr, n, k);
    return 0;
}
