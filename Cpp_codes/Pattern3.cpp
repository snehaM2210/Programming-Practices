//To print a pattern of asterick as below
/*
For n=5;

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}