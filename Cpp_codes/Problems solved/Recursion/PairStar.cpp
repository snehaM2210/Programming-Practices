// Pair Star
// Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
// Input format :
// String S
// Output format :
// Modified string
// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// hello
// Sample Output 1:
// hel*lo
// Sample Input 2 :
// aaaa
// Sample Output 2 :
// a*a*a*a

#include <iostream>
using namespace std;
#include <cstring>

void star(char input[], int start)
{
    if (input[start] == '\0' || input[start + 1] == '\0')
        return;

    star(input, start + 1);

    if (input[start] == input[start + 1])
    {
        for (int i = strlen(input); i >= start + 2; i--)
        {
            input[i + 1] = input[i];
        }
        input[start] = input[start];
        input[start + 1] = '*';
        input[start + 2] = input[start];
    }
}

void pairStar(char input[])
{
    star(input, 0);
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}
