//To print a pattern of asterick as below(Pascal's Triangle)
/*
Taking n=5,you can print the following pattern

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
            
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i=0;i>=1;i--){
        for(int k=0;k<=n-1;k++){
            cout<<"  ";
        }
        for(int j=i;j<=2*i-1;j++){
            cout<<"* ";
        }
        for(int j=0;j<i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}