Objective</br>
Today, we're building on our knowledge of Arrays by adding another dimension. </br>

Context</br>
Given a 6 x 6 2D Array, A:</br>

1 1 1 0 0 0</br>
0 1 0 0 0 0</br>
1 1 1 0 0 0</br>
0 0 0 0 0 0</br>
0 0 0 0 0 0</br>
0 0 0 0 0 0</br>
We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:</br>

a b c</br>
  d</br>
e f g</br>
There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.</br>

Task</br>
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.</br>

Input Format</br>

There are 6 lines of input, where each line contains 6 space-separated integers describing 2D Array A; every value in A will be in the inclusive range of -9 to 9.</br>

Constraints</br>
-9<=A[i][j]<=9</br>
0<=i,j<=5</br>

Output Format</br>

Print the largest (maximum) hourglass sum found in A.</br>

Sample Input</br>

1 1 1 0 0 0</br>
0 1 0 0 0 0</br>
1 1 1 0 0 0</br>
0 0 2 4 4 0</br>
0 0 0 2 0 0</br>
0 0 1 2 4 0</br>
Sample Output</br>

19</br>
Explanation</br>

A contains the following hourglasses:</br>

1 1 1   1 1 0   1 0 0   0 0 0</br>
  1       0       0       0</br>
1 1 1   1 1 0   1 0 0   0 0 0</br>
</br>
0 1 0   1 0 0   0 0 0   0 0 0</br>
  1       1       0       0</br>
0 0 2   0 2 4   2 4 4   4 4 0</br>
</br>
1 1 1   1 1 0   1 0 0   0 0 0</br>
  0       2       4       4</br>
0 0 0   0 0 2   0 2 0   2 0 0</br>
</br>
0 0 2   0 2 4   2 4 4   4 4 0</br>
  0       0       2       0</br>
0 0 1   0 1 2   1 2 4   2 4 0</br>
The hourglass with the maximum sum (19) is:</br>

2 4 4</br>
  2</br>
1 2 4</br>