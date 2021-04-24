// Minimum Length Word
// Given a string S (that can contain multiple words), you need to find the word which has minimum length.
// Note : If multiple words are of same length, then answer will be first minimum length word in the string.
// Words are seperated by single space only.
// Input Format :
// String S
// Output Format :
// Minimum length word
// Constraints :
// 1 <= Length of String S <= 10^5
// Sample Input 1 :
// this is test string
// Sample Output 1 :
// is
// Sample Input 2 :
// abc de ghihjk a uvw h j
// Sample Output 2 :
// a

#include<iostream>
#include<bits/stdc++.h>
/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/
void minLengthWord(char input[], char output[]){
    int n=strlen(input);
    int min=INT_MAX;
    int start=-1;
    int count=0;
    for(int i=0;i<=n;i++){
        if(input[i]!=' ' && i!=n){
            count++;
        }
        else if(count<min||(i==n &&count<min)){
            min=count;
            start=i-min;
            count=0;
        }
        else{
            count=0;
        }
     }
    for(int i=0;i<min;i++){
         output[i]=input[i+start];
    }
}
using namespace std;


int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}