//To print a pattern of asterick as below
/*
For n=5,it should print like the following;

* * * * *
*       *
*       *
*       *
* * * * *

*/


#include <iostream>  
using namespace std;  
int main()  
{  
int i,j,n,k=0;    
cout<<"Enter the no. of Rows: ";    
cin>>n;    
for(i=1;i<=n;i++)    
{    
	for(j=1;j<=n;j++)    
	{
		if((i==1)||(i==n)||(j==1)||(j==n))
			cout<<"* ";
		else
			cout<<"  ";	
	}				
cout<<endl;    
}    
return 0;  
} 