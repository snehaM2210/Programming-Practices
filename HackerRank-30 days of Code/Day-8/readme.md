Objective</br>
Today, we're learning about Key-Value pair mappings using a Map or Dictionary data structure. </br>

Task</br>
Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
You will then be given an unknown number of names to query your phone book for. For each name queried, print the associated 
entry from your phone book on a new line in the form name=phoneNumber; if an entry for name is not found, print Not found instead.</br>

Note: Your phone book should be a Dictionary/Map/HashMap data structure.</br>

Input Format</br>

The first line contains an integer, n, denoting the number of entries in the phone book.
Each of the n subsequent lines describes an entry in the form of 2 space-separated values on a single line. The first value is a friend's name, 
and the second value is an 8-digit phone number.</br>

After the n lines of phone book entries, there are an unknown number of lines of queries. Each line (query) contains a name to look up, and you must 
continue reading lines until there is no more input.</br>

Note: Names consist of lowercase English alphabetic letters and are first names only.</br>

Constraints</br>
1<=n<=10^5</br>
1<=queries<=10^5</br>

Output Format</br>

On a new line for each query, print Not found if the name has no corresponding entry in the phone book; otherwise, print the full name and phoneNumber in the 
format name=phoneNumber.</br>

Sample Input</br>

3</br>
sam 99912222</br>
tom 11122222</br>
harry 12299933</br>
sam</br>
edward</br>
harry</br>

Sample Output</br>

sam=99912222</br>
Not found</br>
harry=12299933</br>

Explanation</br>

We add the following n=3 (Key,Value) pairs to our map so it looks like this:</br>
phoneBook={(sam,99912222),(tom,11122222),(harry,12299933)}</br>

We then process each query and print key=value if the queried key is found in the map; otherwise, we print Not found.</br>

Query 0: sam</br>
Sam is one of the keys in our dictionary, so we print sam=99912222.</br>

Query 1: edward</br>
Edward is not one of the keys in our dictionary, so we print Not found.</br>

Query 2: harry</br>
Harry is one of the keys in our dictionary, so we print harry=12299933.</br>
