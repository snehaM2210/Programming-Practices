// Replace Character Recursively
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Do this recursively.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)
// Output Format :
// Updated string
// Constraints :
// 1 <= Length of String S <= 10^6
// Sample Input :
// abacd
// a x
// Sample Output :
// xbxcd

#include <iostream>
using namespace std;
#include <cstring>
void replacement(char input[], char c1, char c2, int start)
{
    if (input[start] == '\0')
        return;

    replacement(input, c1, c2, start + 1);

    if (input[start] == c1)
    {
        input[start] = c2;
    }
}

void replaceCharacter(char input[], char c1, char c2)
{
    replacement(input, c1, c2, 0);
}

int main()
{
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
