Objective</br>
Today we're discussing scope. </br>

The absolute difference between two integers, a and b, is written as |a-b|. The maximum absolute difference between two integers in a set of positive integers, elements, is the largest absolute difference between any two integers in elements.</br>

The Difference class is started for you in the editor. It has a private integer array (elements) for storing N non-negative integers, and a public integer (maximumDifference) for storing the maximum absolute difference.</br>
</br>
Task</br>
Complete the Difference class by writing the following:</br>

A class constructor that takes an array of integers as a parameter and saves it to the elements instance variable.</br>
A computeDifference method that finds the maximum absolute difference between any 2 numbers in N and stores it in the maximumDifference instance variable.</br>

Input Format</br>

You are not responsible for reading any input from stdin. The locked Solution class in your editor reads in 2 lines of input; the first line contains N, and the second line describes the elements array.</br>

Constraints</br>
1<+N<=10</br>
1<=elements[i]<=100, where 0<=i<=N-1</br>

Output Format</br>

You are not responsible for printing any output; the Solution class will print the value of the maximumDifference instance variable.</br>
</br>
Sample Input</br>

3</br>
1 2 5</br>

Sample Output</br>

4</br>

Explanation</br>

The scope of the elements array and maximumDifference integer is the entire class instance. The class constructor saves the argument passed to the constructor as the elements instance variable (where the computeDifference method can access it).
</br>
To find the maximum difference, computeDifference checks each element in the array and finds the maximum difference between any 2 elements:</br> 
|1-2|=1</br>
|1-5|=4</br>
|2-5|=3</br>
The maximum of these differences is 4, so it saves the value 4 as the maximumDifference instance variable. The locked stub code in the editor then prints the value stored as maximumDifference, which is 4.</br>