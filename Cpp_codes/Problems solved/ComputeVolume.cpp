#include <iostream>

using namespace std;

int volume(int l,int w,int h){
	cout<<"Enter length: ";
	cin>>l;
	cout<<"Enter width: ";
	cin>>w;
	cout<<"Enter height: ";
	cin>>h;
	return l*w*h;
}

int main(){
	int l,w,h;
	cout<<"Volume: "<<volume(l,w,h);
}
