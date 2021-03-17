//To print a pattern of no.s as below
/* constraint-> 0<=n<=13
For n=4;
 A
 BC
 CDE
 DEFG
 EFGHI
*/

#include<iostream>
using namespace std;


int main(){

    int n;
    if(n>=0 || n<=13){
    cin>>n;
    }
    int i,j;
    for(i=1;i<=n;i++){
        char k='A'+i-1;
        for(j=1;j<=i;j++,k++){
            cout<<k;
        }
        cout<<endl;
    }
  return 0;
}
