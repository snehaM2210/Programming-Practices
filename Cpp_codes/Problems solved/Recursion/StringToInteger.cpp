// String to Integer
// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
// Input format :
// Numeric string S (string, Eg. "1234")
// Output format :
// Corresponding integer N (int, Eg. 1234)
// Constraints :
// 0 <= |S| <= 9
// where |S| represents length of string S.
// Sample Input 1 :
// 00001231
// Sample Output 1 :
// 1231
// Sample Input 2 :
// 12567
// Sample Output 2 :
// 12567

#include <iostream>
using namespace std;
#include <cstring>
int number(char input[], int last)
{
    if (last == 0)
        return input[last] - '0';
    int ans = number(input, last - 1);
    int i = input[last] - '0';
    return ans * 10 + i;
}
int stringToNumber(char input[])
{
    int n = strlen(input) - 1;
    number(input, n);
}

int main()
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}