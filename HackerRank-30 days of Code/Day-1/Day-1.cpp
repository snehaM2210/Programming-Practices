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
 that is �HackerRank � and after the �HackerRank� user string will be shown for this Day 1: Data Types solution I am going to explain the program step by step.

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

 Here you can see that we fixed value to one that�s we use setprecision(1).

    double d = 4.0;
    double e = 4.0;
    cout<<fixed<<setprecision(1)<<d<<endl;
 Now next step is for the string is very simple we can print the first string and then user input sting but we have one problem.

 We can not accept space user input string so for that we use getline(cin,t). if you don�t know about getline() function read Below.

Use of getline in C++

 getline is used to store multiple strings with included space and next-line. getline reads line by line and store the string in the variable and cin is used for storing anything in C++.

Syntax of getline
    getline(cin, input_string)
    string s = " HackerRank ";
    string t ; // user input.
    cout<<s<<t;
*/

#include<iostream> 
#include<iomanip>
#include<limits> 
using namespace std;
int main(){
	int i=4;
	double d=4.0;
	string s="HackerRank ";

	// Declare second integer, double, and String variables.
	int i2;
	double d2;
	string s2;
	
	// Read and save an integer, double, and String to your variables.
	string temp;
	getline(cin,temp);
	i2=stoi(temp);
	getline(cin,temp);
	d2=stod(temp);
	getline(cin,s2);
	
	// Print the sum of both integer variables on a new line.
    cout<<i+i2<<"\n";
	
	// Print the sum of the double variables on a new line.
	cout<<fixed<<setprecision(1)<<d+d2<<"\n";
	
	// Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
	cout<<s+s2<<endl;
	
	return 0;	 
}
