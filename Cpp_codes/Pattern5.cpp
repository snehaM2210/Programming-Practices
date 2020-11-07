//To print a pattern of asterick as below
/*
For n=5;

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include<iostream>
using namespace std;

int main(){
	int n,i,j,k=1;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}
	return 0;
}