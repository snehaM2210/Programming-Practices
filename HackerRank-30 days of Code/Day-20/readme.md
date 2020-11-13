Objective</br>
Today, we're discussing a simple sorting algorithm called Bubble Sort. </br>
</br>
Consider the following version of Bubble Sort:</br>
</br></br>
for (int i = 0; i < n; i++) {</br>
    // Track number of elements swapped during a single array traversal</br>
    int numberOfSwaps = 0;</br>
    </br>
    for (int j = 0; j < n - 1; j++) {</br>
        // Swap adjacent elements if they are in decreasing order</br>
        if (a[j] > a[j + 1]) {</br>
            swap(a[j], a[j + 1]);</br>
            numberOfSwaps++;</br>
        }</br>
    }</br>
    </br>
    // If no elements were swapped during a traversal, array is sorted</br>
    if (numberOfSwaps == 0) {</br>
        break;</br>
    }</br>
}</br>
Task</br></br>
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:</br>
</br>
Array is sorted in numSwaps swaps.</br>
where numSwaps is the number of swaps that took place.</br>
First Element: firstElement</br>
where firstElement is the first element in the sorted array.</br>
Last Element: lastElement</br>
where lastElement is the last element in the sorted array.</br>
Hint: To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.</br>
</br>
Input Format</br>
</br>
The first line contains an integer, n, denoting the number of elements in array a.
The second line contains n space-separated integers describing the respective values of a0,a1,...,an-1.
</br>
Constraints</br>
</br>
2<=n<=600</br>
1<=ai<=2*10^6, where 0 <= i < n .</br>
</br>
Output Format</br>
</br>
Print the following three lines of output:</br>
</br>
Array is sorted in numSwaps swaps.</br>
where numSwaps is the number of swaps that took place.</br>
First Element: firstElement</br>
where firstElement is the first element in the sorted array.</br>
Last Element: lastElement</br>
where lastElement is the last element in the sorted array.</br>
Sample Input 0</br>
</br>
3</br>
1 2 3</br>
Sample Output 0</br>
</br>
Array is sorted in 0 swaps.</br>
First Element: 1</br>
Last Element: 3</br>
Explanation 0</br>
</br>
The array is already sorted, so 0 swaps take place and we print the necessary  lines of output shown above.</br>
</br>
Sample Input 1</br>
</br>
3</br>
3 2 1</br>
Sample Output 1</br>
</br>
Array is sorted in 3 swaps.</br>
First Element: 1</br>
Last Element: 3</br></br>
Explanation 1</br>
</br>
The array a=[3,2,1] is not sorted, so we perform the following 3 swaps:</br>
1.[3,2,1]->[2,3,1]</br>
2.[2,3,1]->[2,1,3]</br>
3.[2,1,3]->[1,2,3]</br>
At this point the array is sorted and we print the necessary 3 lines of output shown above.</br>