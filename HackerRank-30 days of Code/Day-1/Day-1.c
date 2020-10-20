/*Declare 3 variables one of type int, one of type double, and one of type String. Read 3 lines of input from stdin 
(according to the sequence given in the Input Format section below) and initialize your 3 variables.

Use the + operator to perform the following operations:
 Print the sum of i plus your int variable on a new line.
 Print the sum of d plus your double variable to a scale of one decimal place on a new line.
 Concatenate s with the string you read as input and print the result on a new line.

Day 1 Data Types Solution Approach:

 So here is a logic of problem Hackerrank Solution For 30 Days of Code Day 1 Data Types. 
 Here in this problem, some data type is already defined they are following, int, double, string and we have to initialize
 another data type which is same int, double, and string for the first data type int we have to perform addition with user input data.

 And for double also we have to repeat the same process and for string first, we have to print the already initialize string
 that is “HackerRank “ and after the “HackerRank” user string will be shown for this Day 1: Data Types solution I am going to explain the program step by step.

Data Types Hackerrank Problem Explanation:
  as we know that int i = 4; are already define so we have to take another integer j, 
  after that we will take user input and store the value in j then we will add i + j value like below.

    int i = 4;
    int j = 12;
    cout << i + j <<endl;
 So the i + j value will be added and print the sum of both numbers.

 Now repeat the same process for double data type so add both double value fixed value and user input value
 and print the output but remember as you know that double-precision value is more than 1.

 So this is a problem for avoiding this type of problem we can fix the double value by using setprecision(value) 
 means how many digits you want after pointer and fraction number.

 Here you can see that we fixed value to one that’s we use setprecision(1).

    double d = 4.0;
    double e = 4.0;
    cout<<fixed<<setprecision(1)<<d<<endl;
 Now next step is for the string is very simple we can print the first string and then user input sting but we have one problem.

 We can not accept space user input string so for that we use getline(cin,t). if you don’t know about getline() function read Below.


*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int i=4;
	double d=4.0;
	char s[]="HackerRank ";
	
    // Declare second integer, double, and String variables.
	int i2;
	double d2;
	char s2[100];
	 
	//To read inputs
	scanf("%d",&i2);
	scanf("%lf",&d2);
	scanf("%*[\n] %[^\n]", s2);
	
	//To print outputs
	printf("%d\n",i+i2);
	printf("%.01lf\n",d+d2);
	printf("%s%s",s,s2);
	
	return 0;	
}
