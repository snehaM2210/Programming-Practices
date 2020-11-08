//To print a pattern of asterick as below
/*
For n=3,it should print like the following;
		
		*
	  * * *
	* * * * *
	  * * *
		*

*/


#include <iostream>  
using namespace std;  
int main()  
{  
int i,j,n,k=0;    
cout<<"Enter the no. of Columns: ";    
cin>>n;    
for(i=1,k=0;i<=n;i++,k=0)    
{    
	for(j=1;j<=(n-i);j++)    
	{
		cout<<"  ";
	}
	while(k!=(2*i)-1)
	{
		cout<<"* ";
		k++;
	}				
cout<<endl;    
}    
for(i=n-1,k=0;i>=1;i--,k=0)
{
	for(j=1;j<=n-i;j++)
	{
		cout<<"  ";
	}
	while(k!=(2*i)-1)
	{
		cout<<"* ";
		k++;
	}
	cout<<endl;
}
return 0;  
} 