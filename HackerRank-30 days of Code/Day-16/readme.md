Objective</br>
Today, we're getting started with Exceptions by learning how to parse an integer from a string and print a custom error message. </br>
</br>
Task</br>
Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String.
</br>
Note: You must use the String-to-Integer and exception handling constructs built into your submission language. If you attempt to use loops/conditional statements, you will get a 0 score.
</br></br>
Input Format</br>

A single string,S .
</br></br>
Constraints</br>

1<=|S|<=6, where |S| is the length of string S.
S is composed of either lowercase letters (a-z) or decimal digits (0-9).</br></br>
Output Format</br>

Print the parsed integer value of S, or Bad String if S cannot be converted to an integer.
</br>
Sample Input 0</br>

3</br>
Sample Output 0</br>

3</br>
Sample Input 1</br>

za</br>
Sample Output 1</br>

Bad String</br></br>
Explanation</br>

Sample Case 0 contains an integer, so it should not raise an exception when we attempt to convert it to an integer. Thus, we print the 3.</br>
Sample Case 1 does not contain any integers, so an attempt to convert it to an integer will raise an exception. Thus, our exception handler prints Bad String.</br>