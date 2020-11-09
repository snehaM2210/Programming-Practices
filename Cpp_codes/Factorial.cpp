//Program to find factorial 
#include<iostream>
using namespace std;

int main(){
	long int n,ans=1;
	cout<<"Enter no. to find factorial: ";
	cin>>n;
	for(long int i=n;i>=1;i--){
		ans=ans*i;
	}
	cout<<"Factorial of "<<n<<" is: "<<ans<<endl;
	return 0;
}