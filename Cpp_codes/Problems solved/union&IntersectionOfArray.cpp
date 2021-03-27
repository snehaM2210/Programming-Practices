// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;
  
/* Function prints union of arr1[] and arr2[]
   m is the number of elements in arr1[]
   n is the number of elements in arr2[] */
int printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
  
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
  
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
  
    /* Print remaining elements of the larger array */
    while (i < m)
        cout << arr1[i++] << " ";
  
    while (j < n)
        cout << arr2[j++] << " ";
}

int printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
  
  
/* Driver code*/
int main()
{
	int k;
	cout<<"Enter the no. of elements in the 1st array: "<<endl;
	cin>>k;
	int j;
	cout<<"Enter the no. of elements in the 2nd array: "<<endl;
	cin>>j;
    int arr1[k],i;
    cout<<"Enter the elements in the 1st array: "<<endl;
    for(int i=0;i<k;i++){
    	cin>>arr1[i];
	}
    int arr2[j],l;
    cout<<"Enter the elements in the 2nd array: "<<endl;
    for(int l=0;l<j;l++){
    	cin>>arr2[l];
	}
  
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
  
    // Function calling
    cout<<"\nUnion of two arrays: "<<endl;
    printUnion(arr1, arr2, m, n);
    cout<<"\nIntersection of two arrays: "<<endl;
    printIntersection(arr1, arr2, m, n);
    return 0;
}
