//To print a pattern of no.s as below
/*
For n=4;

  ABCD
  ABCD
  ABCD
  ABCD
       */

#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int i,j;
    char k='A';
    for(i=1;i<=n;i++){
        for(j=1,k='A';j<=n;j++,k++){
            cout<<k;
        }
        cout<<endl;
    }
  return 0;
}     