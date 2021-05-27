// Return Keypad Code
// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.
// Note : 1. The order of strings are not important.
// 2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
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

int keypad(int num, string output[])
{
    if (num == 0 || num == 1)
    {
        output[0] = "";
        return 1;
    }
    int k = keypad(num / 10, output);
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
    int len = k;
    for (int i = 1; i < s.size(); i++)
    {
        for (int j = 0; j < k; j++)
        {
            output[len + j] = output[j] + s[i];
        }
        len = len + k;
    }
    for (int i = 0; i < k; i++)
    {
        output[i] += s[0];
    }
    return k * s.size();
}

int main()
{
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}