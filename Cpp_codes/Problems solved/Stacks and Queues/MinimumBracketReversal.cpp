// Minimum bracket Reversal
// For a given expression in the form of a string, find the minimum number of brackets that can be reversed in order to make the expression balanced. The expression will only contain curly brackets.
// If the expression can't be balanced, return -1.
// Example:
// Expression: {{{{
// If we reverse the second and the fourth opening brackets, the whole expression will get balanced. Since we have to reverse two brackets to make the expression balanced, the expected output will be 2.

// Expression: {{{
// In this example, even if we reverse the last opening bracket, we would be left with the first opening bracket and hence will not be able to make the expression balanced and the output will be -1.
// Input Format :
// The first and the only line of input contains a string expression, without any spaces in between.
// Output Format :
// The only line of output will print the number of reversals required to balance the whole expression. Prints -1, otherwise.
// Note:
// You don't have to print anything. It has already been taken care of.
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the expression.

// Time Limit: 1sec
// Sample Input 1:
// {{{
// Sample Output 1:
// -1
// Sample Input 2:
// {{{{}}
// Sample Output 2:
// 1

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int countBracketReversals(string input)
{
    int n = input.length();
    if (n % 2 != 0)
    {
        return -1;
    }
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == '}' && !st.empty())
        {
            if (st.top() == '{')
                st.pop();
            else
                st.push(input[i]);
        }
        else
            st.push(input[i]);
    }
    int reduced_len = st.size();
    int size = 0;
    while (!st.empty() && st.top() == '{')
    {
        st.pop();
        size++;
    }
    return (reduced_len / 2 + size % 2);
}

int main()
{
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}