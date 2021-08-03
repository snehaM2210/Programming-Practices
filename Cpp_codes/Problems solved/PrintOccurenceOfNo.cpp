#include <bits/stdc++.h>
using namespace std;

void printOccurence(string arr)
{
    int n = arr.size();
    int count = 0, i = 0;
    int newArray[10] = {0};
    for (i = 0; i < n; i++)
    {
        while (arr[i] == arr[i++])
        {
            count++;
        }
        for (i = 0; i < n; i++)
        {
            newArray[i] = count;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << newArray[i];
    }
}
int main()
{
    string n;
    cin >> n;
    printOccurence(n);
}