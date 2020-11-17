Objective
</br></br>
Today we're learning about running time!
</br></br>
Task
</br></br>
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number, n, determine and print whether it's Prime or Not Prime.
</br></br>
Note: If possible, try to come up with a O(n^1/2) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code!
</br></br>
Input Format
</br></br>
The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines contains an integer, n, to be tested for primality.
</br></br>
Constraints
</br></br>
1<=T<=30</br>
1<=n<=2*10^9</br>
</br></br>
Output Format
</br></br>
For each test case, print whether n is Prime or Not Prime on a new line.
</br></br>
Sample Input
</br></br>
3</br>
12</br>
5</br>
7</br>
</br>
Sample Output
</br></br>
Not prime</br>
Prime</br>
Prime
</br></br>
Explanation
</br></br>
Test Case 0: n=12.</br>
12 is divisible by numbers other than 1 and itself (i.e.: 2, 3, 6), so we print Not Prime on a new line.
</br></br>
Test Case 1: n=5.</br>
5 is only divisible 1 and itself, so we print Prime on a new line.
</br></br>
Test Case 2: n=7.</br>
7 is only divisible 1 and itself, so we print Prime on a new line.