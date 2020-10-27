
Objective</br>
Today, we're learning and practicing an algorithmic concept called Recursion.</br>

Recursive Method for Calculating Factorial</br>
factorial(N)={ 1  &nbsp;&nbsp;&nbsp;                       N<=1</br>
&nbsp;&nbsp;&nbsp;&nbsp;               Nxfactorial(N-1)     &nbsp;&nbsp;&nbsp;   otherwise }</br>

Task</br>
Write a factorial function that takes a positive integer, N as a parameter and prints the result of N! (N factorial).</br>

Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of 0.</br>

Input Format</br>

A single integer, N (the argument to pass to factorial).</br>

Constraints</br>
2<=N<=12</br>
Your submission must contain a recursive function named factorial.</br>

Output Format</br>
Print a single integer denoting N!.</br>

Sample Input</br>
3</br>

Sample Output</br>
6</br>

Explanation
Consider the following steps:</br>
factorial(3)=3xfactorial(2)</br>
factorial(2)=2xfactorial(1)</br>
factorial(1)=1</br>

From steps 2 and 3, we can say factorial(2)=2x1=2; then when we apply the value from factorial(2) to step 1, we get factorial(3)=3x2x1=6. Thus, we print 6 as our answer.</br>
