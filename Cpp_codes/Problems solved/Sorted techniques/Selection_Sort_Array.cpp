#include <iostream>

using namespace std;

void SelectionSort(int *input, int n){
    for(int i=0;i<n;i++){
    //Find minimum element
    int min=input[i],minIndex=i;
    for(int j=i+1;j<n;j++){
        if(input[j]<min){
            min=input[j];
            minIndex=j;
        }
    }
    //Swap the no.s
    int temp=input[i];
    input[i]=input[minIndex];
    input[minIndex]=temp;
    }
}
int main()
{
    int size;
    cin>>size;
    int *input=new int[size];
    for(int i=0;i<size;i++){
        cin>>input[i];
    }
    SelectionSort(input,size);
    for(int i=0;i<size;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    return 0;
}