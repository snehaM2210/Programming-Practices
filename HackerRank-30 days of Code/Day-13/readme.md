Objective</br>
Today, we're taking what we learned yesterday about Inheritance and extending it to Abstract Classes. Because this is a very specific Object-Oriented concept, submissions are limited to the few languages that use this construct. 
</br>
Task</br>
Given a Book class and a Solution class, write a MyBook class that does the following:
</br>
Inherits from Book</br>
Has a parameterized constructor taking these 3 parameters:</br>
1.string title </br>
2.string author</br>
3.int price</br>
Implements the Book class' abstract display() method so it prints these 3 lines:</br>
1.Title:, a space, and then the current instance's title.</br>
2.Author:, a space, and then the current instance's author.</br>
3.Price:, a space, and then the current instance's price.</br>
Note: Because these classes are being written in the same file, you must not use an access modifier (e.g.: public) when declaring MyBook or your code will not execute.</br>

Input Format</br>

You are not responsible for reading any input from stdin. The Solution class creates a Book object and calls the MyBook class constructor (passing it the necessary arguments). It then calls the display method on the Book object.
</br></br>
Output Format</br>

The void display() method should print and label the respective title, author, and price of the MyBook object's instance (with each value on its own line) like so:</br>

Title: $title</br>
Author: $author</br>
Price: $price</br>
Note: The $ is prepended to variable names to indicate they are placeholders for variables.</br>

Sample Input</br>

The following input from stdin is handled by the locked stub code in your editor:</br>

The Alchemist</br>
Paulo Coelho</br>
248</br></br>
Sample Output</br>

The following output is printed by your display() method:
</br>
Title: The Alchemist</br>
Author: Paulo Coelho</br>
Price: 248</br>