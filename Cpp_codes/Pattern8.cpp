//To print a pattern of asterick as below
/*
For n=3,it should print like the following;

*
* *
* * *
* *
*
[Hint-First print * in 3 rows then print in reverse order subtracting by 1.]
*/


#include <iostream>  
using namespace std;  
int main()  
{  
int i,j,n,k=0;    
cout<<"Enter the no. of Columns: ";    
cin>>n;    
for(i=1;i<=n;i++)    
{
	for(j=1;j<=i;j++)
	{
		cout<<"*";
	}				
cout<<endl;
}
for(i=n-1;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		cout<<"*";
	}
}    
return 0;  
} 