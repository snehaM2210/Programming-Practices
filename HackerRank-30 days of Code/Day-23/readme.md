Objective
</br></br>
Today, we're going further with Binary Search Trees. 
</br></br>
Task
</br></br>
A level-order traversal, also known as a breadth-first search, visits each level of a tree's nodes from left to right, top to bottom. You are given a pointer, root, pointing to the root of a binary search tree. Complete the levelOrder function provided in your editor so that it prints the level-order traversal of the binary search tree.
</br></br>
Hint: You'll find a queue helpful in completing this challenge.
</br></br>
Input Format
</br></br>
The locked stub code in your editor reads the following inputs and assembles them into a BST:
The first line contains an integer, T (the number of test cases).
The T subsequent lines each contain an integer, data, denoting the value of an element that must be added to the BST.
</br></br>
Output Format
</br></br>
Print the data value of each node in the tree's level-order traversal as a single line of  space-separated integers.
</br></br>
Sample Input
</br></br>
6</br>
3</br>
5</br>
4</br>
7</br>
2</br>
1</br>
</br>
Sample Output
</br></br>
3 2 5 1 4 7
</br></br>
Explanation
</br></br>
The input forms the following binary search tree:</br>
We traverse each level of the tree from the root downward, and we process the nodes at each level from left to right. The resulting level-order traversal is 3->2->5->1->4->7, and we print these data values as a single line of space-separated integers.