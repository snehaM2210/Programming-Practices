#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int arr_i=0;arr_i<n;arr_i++){
        cin>>arr[arr_i];
    }
    for(int arr_i=n-1;arr_i>=0;arr_i--){
        cout<<arr[arr_i]<<" ";
    }
    return 0;
}
