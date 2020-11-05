Objective</br>
Yesterday's challenge taught you to manage exceptional situations by using try and catch blocks. In today's challenge, you're going to practice throwing and propagating an exception.</br>
</br>
Task</br>
Write a Calculator class with a single method: int power(int,int). The power method takes two integers, n and p, as parameters and returns the integer result of n^p. If either n or p is negative, then the method must throw an exception with the message: n and p should be non-negative.
</br>
Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.</br>
</br>
Input Format</br>
</br>
Input from stdin is handled for you by the locked stub code in your editor. The first line contains an integer, T, the number of test cases. Each of the T subsequent lines describes a test case in 2 space-separated integers denoting n and p, respectively.</br>
</br>
Constraints</br>
</br>
No Test Case will result in overflow for correctly written code.</br>
Output Format</br>
</br>
Output to stdout is handled for you by the locked stub code in your editor. There are T lines of output, where each line contains the result of n^p as calculated by your Calculator class' power method.</br>
</br>
Sample Input</br>
</br>
4</br>
3 5</br>
2 4</br>
-1 -2</br>
-1 3</br></br>
Sample Output</br>
</br>
243</br>
16</br>
n and p should be non-negative</br>
n and p should be non-negative</br></br>
Explanation</br>
</br>
T=4</br>
T0: 3 and 5 are positive, so power returns the result of 3^5, which is 243.</br>
T1: 2 and 4 are positive, so power returns the result of 2^4, which is 16.</br>
T2: Both inputs (-1 and -2) are negative, so power throws an exception and n and p should be non-negative is printed.</br>
T3: One of the inputs (-1) is negative, so power throws an exception and n and p should be non-negative is printed.</br>