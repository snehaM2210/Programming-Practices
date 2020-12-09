//To print a pattern of asterick as below
/*
Output Example:-

For n=5

    *
   **
  ***
 ****
*****

*/

#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	cout<<"Enter no. of rows: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
		 		cout<<" ";	
			}
			else
				cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}