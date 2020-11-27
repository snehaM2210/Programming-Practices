Objective</br>
Welcome to the last day! 
</br></br>
Task</br>
Given set S={1,2,3,...,N}. Find two integers, A and B (where A < B), from set S such that the value of A&B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.
</br>
Input Format
</br></br>
The first line contains an integer, T, the number of test cases.</br>
Each of the T subsequent lines defines a test case as 2 space-separated integers, N and K, respectively.
</br></br>
Constraints
</br></br>
1<=T<=10^3</br>
2<=N<=10^3</br>
2<=K<=N</br>
</br>
Output Format
</br></br>
For each test case, print the maximum possible value of A&B on a new line.
</br></br>
Sample Input
</br></br>
3</br>
5 2</br>
8 5</br>
2 2</br>
</br>
Sample Output
</br></br>
1</br>
4</br>
0</br>
</br>
Explanation
</br></br>
 N=5,K=2,S={1,2,3,4,5}
</br></br>
All possible values of A and B are:
</br></br>
1.A=1,B=2;A&B=0</br>
2.A=1,B=3;A&B=1</br>
3.A=1,B=4;A&B=0</br>
4.A=1,B=5;A&B=1</br>
5.A=2,B=3;A&B=2</br>
6.A=2,B=4;A&B=0</br>
7.A=2,B=5;A&B=0</br>
8.A=3,B=4;A&B=0</br>
9.A=3,B=5;A&B=1</br>
10.A=4,B=5;A&B=4</br>
</br>
The maximum possible value of A&B that is also <(K=2) is 1, so we print 1 on a new line.