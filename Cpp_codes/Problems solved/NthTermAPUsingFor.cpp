//Program to find nth term of an Arithmetic Progression
#include<iostream>
using namespace std;

int main(){
	int n,a,d,an=0,sn=0;
	cout<<"No. of terms: ";
	cin>>n;
	cout<<"\nEnter the first term: ";
	cin>>a;
	cout<<"\nEnter the difference: ";
	cin>>d;
	for(int i=1;i<=n;i++){
		an=a+((i-1)*d);
		cout<<"Term"<<i<<" = "<<an<<endl;
		sn=sn+an;
	}
	cout<<"\nSum of Nth terms = "<<sn<<endl;
	return 0;
}