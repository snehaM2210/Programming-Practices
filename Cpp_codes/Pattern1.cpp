//To print a patter of asterick 1 in first row,2 in second row, 3 in third row,and so on depending on the no. of rows we give as input

/*
Output example:-

For n=5;

*
**
***
****
*****

*/
#include <iostream>

using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}