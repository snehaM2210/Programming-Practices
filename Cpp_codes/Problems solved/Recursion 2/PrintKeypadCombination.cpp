// Print Keypad Combinations Code
// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note : The order of strings are not important. Just print different strings in new lines.
// Input Format :
// Integer n
// Output Format :
// All possible strings in different lines
// Constraints :
// 1 <= n <= 10^6
// Sample Input:
// 23
// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

#include <iostream>
#include <string>
using namespace std;

void printString(int num, string output)
{
    if (num == 0 || num == 1)
    {
        cout << output << endl;
        return;
    }
    string s;
    if (num % 10 == 2)
    {
        s = "abc";
    }
    if (num % 10 == 3)
    {
        s = "def";
    }
    if (num % 10 == 4)
    {
        s = "ghi";
    }
    if (num % 10 == 5)
    {
        s = "jkl";
    }
    if (num % 10 == 6)
    {
        s = "mno";
    }
    if (num % 10 == 7)
    {
        s = "pqrs";
    }
    if (num % 10 == 8)
    {
        s = "tuv";
    }
    if (num % 10 == 9)
    {
        s = "wxyz";
    }
    for (int i = 0; i < s.size(); i++)
    {
        printString(num / 10, s[i] + output);
    }
}
void printKeypad(int num)
{
    printString(num, "");
}

int main()
{
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
