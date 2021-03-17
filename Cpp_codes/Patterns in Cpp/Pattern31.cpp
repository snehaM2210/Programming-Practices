//To print a pattern of no.s as below
/*
For n=4;

  ABCD
  BCDE
  CDEF
  DEFG
       */

#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        char k='A'+i-1;
        for(j=1;j<=n;j++,k++){
            cout<<k;
        }
        cout<<endl;
    }
  return 0;
}