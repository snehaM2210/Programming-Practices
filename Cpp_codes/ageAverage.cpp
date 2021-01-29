//sentinel controlled program
//To calculate the avg of ages of people taken as input
#include <iostream>
using namespace std;

int main() 
{
	int age,ageTotal=0,noOfPeople=0;
	cout<<"Enter 1st age or -1 to quit:"<<endl;
	cin>>age;
	while(age!= -1){
		ageTotal=ageTotal+age;
		noOfPeople++;
		cout<<"Enter next person's age or -1 to quit"<<endl;
		cin>>age;
	}
	cout<<"No. of people entered: "<<noOfPeople<<endl;
	cout<<"Average age: "<<ageTotal/noOfPeople;
	return 0;
}
