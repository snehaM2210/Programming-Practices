#include <iostream>

using namespace std;

float sumAP(float a,float d,float n){
	return(a+(n-1)*d);
}
	

int main()
{
	float a,d,n;
	cout<<"Enter the first term,a: ";
	cin>>a;
	cout<<"\nEnter the difference,d: ";
	cin>>d;
	cout<<"\nNo.s of terms in the A.P. ,n: ";
	cin>>n;
    cout<<"\nSum of the A.P. series is: "<<sumAP(a,d,n);
	return 0; 
}