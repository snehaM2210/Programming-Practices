// Code : Edit Distance (Memoization and DP)
// You are given two strings S and T of lengths M and N, respectively. Find the 'Edit Distance' between the strings.
// Edit Distance of two strings is the minimum number of steps required to make one string equal to the other. In order to do so, you can perform the following three operations:
// 1. Delete a character
// 2. Replace a character with another one
// 3. Insert a character
// Note :
// Strings don't contain spaces in between.
//  Input format :
// The first line of input contains the string S of length M.

// The second line of the input contains the String T of length N.
// Output format :
// Print the minimum 'Edit Distance' between the strings.
// Constraints :
// 0 <= M <= 10 ^ 3
// 0 <= N <= 10 ^ 3

// Time Limit: 1 sec
// Sample Input 1 :
// abc
// dc
// Sample Output 1 :
// 2
//  Explanation to the Sample Input 1 :
//  In 2 operations we can make string T to look like string S.
// First, insert character 'a' to string T, which makes it "adc".

// And secondly, replace the character 'd' of string T with 'b' from the string S. This would make string T as "abc" which is also string S.

// Hence, the minimum distance.
// Sample Input 2 :
// whgtdwhgtdg
// aswcfg
// Sample Output 2 :
// 9

#include <iostream>
#include <cstring>
using namespace std;

int editDistance_MemDP(string s1, string s2, int **output)
{
    if (s1.size() == 0 || s2.size() == 0)
    {
        return max(s1.size(), s2.size());
    }
    if (output[s1.size()][s2.size()] != -1)
    {
        return output[s1.size()][s2.size()];
    }
    int ans;
    if (s1[0] == s2[0])
    {
        return editDistance_MemDP(s1.substr(1), s2.substr(1), output);
    }
    else
    {
        int a = editDistance_MemDP(s1.substr(1), s2, output) + 1;
        int b = editDistance_MemDP(s1, s2.substr(1), output) + 1;
        int c = editDistance_MemDP(s1.substr(1), s2.substr(1), output) + 1;
        ans = min(a, min(b, c));
    }
    output[s1.size()][s2.size()] = ans;
    return ans;
}

int editDistance(string s1, string s2)
{
    int **output = new int *[s1.size() + 1];
    for (int i = 0; i <= s1.size(); i++)
    {
        output[i] = new int[s2.size() + 1];
        for (int j = 0; j <= s2.size(); j++)
        {
            output[i][j] = -1;
        }
    }
    return editDistance_MemDP(s1, s2, output);
}

int main()
{
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << editDistance(s1, s2) << endl;
}