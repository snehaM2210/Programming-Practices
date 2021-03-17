//To print a pattern of no.s as below
/*
For n=5;

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=i;
        int j=1;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}

