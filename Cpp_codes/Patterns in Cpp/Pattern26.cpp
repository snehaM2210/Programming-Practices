//To print a pattern of no.s as below
/*
For n=4;

    1
   23
  345
 4567     */
 
#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
   
    for(int i=1,k=1;i<=n;i++){
        k=i;
        for(int j=i;j<n;j++){
        cout<<" ";
   		}
        for(int j=1;j<=i;j++,k++){
            cout<<k;
        }
        cout<<endl;
    }
  return 0;
}
