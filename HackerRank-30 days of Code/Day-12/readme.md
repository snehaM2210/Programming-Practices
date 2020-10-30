Objective</br>
Today, we're delving into Inheritance. </br>

Task</br>
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.</br>

Complete the Student class by writing the following:</br>

A Student class constructor, which has 4 parameters:</br>
A string, firstName.</br>
A string, lastName.</br>
An integer, id.</br>
An integer array (or vector) of test scores, scores.</br>
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:</br>
Grading Scale:</br>
Letter&nbsp;&nbsp;&nbsp;Average(a)</br>
O&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;90<=a<=100</br>
E&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;80<=a<=90</br>
A&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;70<=a<=80</br>
P&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;55<=a<=70</br>
D&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;40<=a<=55</br>
T&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;a<40</br>

Input Format</br>

The locked stub code in your editor calls your Student class constructor and passes it the necessary arguments. It also calls the calculate method (which takes no arguments).</br>

You are not responsible for reading the following input from stdin:</br>
The first line contains , firstName, lastName, and id, respectively. The second line contains the number of test scores. The third line of space-separated integers describes scores.</br>

Constraints</br>
1<=|firstName|,|lastName|<=10</br>
|id|=7</br>
0<=score,average<=100</br>

Output Format</br>

This is handled by the locked stub code in your editor. Your output will be correct if your Student class constructor and calculate() method are properly implemented.</br>

Sample Input</br>

Heraldo Memelli 8135627</br>
2</br>
100 80</br>

Sample Output</br>

 Name: Memelli, Heraldo</br>
 ID: 8135627</br>
 Grade: O</br>

Explanation</br>

This student had 2 scores to average: 100 and 80. The student's average grade is (100+80)/2=90. An average grade of 90 corresponds to the letter grade O, so our calculate() method should return the character'O'.</br>