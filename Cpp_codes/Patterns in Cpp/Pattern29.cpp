//To print a pattern of no.s as below
/*
For n=4;

  4321
  4321
  4321
  4321
       */

#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
   
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
  return 0;
}      