// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.
// += : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.
// a += b is equivalent to a = a + b;

// Input Format
// Input will contain four integers -  , one per line.

// Output Format
// Return the greatest of the four integers.
// PS: I/O will be automatically handled.

// Sample Input
// 3
// 4
// 6
// 5

// Sample Output
// 6

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int gre;
    if(a>b && a>c && a>d)
    {
        gre = a;
    }
    else if(b>a && b>c && b>d)
    {
        gre = b;
    }
    else if(c>a && c>b && c>d)
    {
        gre = c;
    }
    else if(d>a && d>b && d>c)
    {
        gre = d;
    }
return gre;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}