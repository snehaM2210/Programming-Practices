#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	float a,p=10000,r=.03;
	cout<<"Enter no. of days: ";
	cin>>n;
	for(int day=1;day<=n;day++){
		a=p*pow(1+r, day);
		cout<<day<<" ---- "<<a<<endl;
	}
	return 0;
}
