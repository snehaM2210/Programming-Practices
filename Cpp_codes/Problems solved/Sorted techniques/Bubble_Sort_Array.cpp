#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *input, int size)
{
    int i,j;
    bool swapped;
    for(i=0;i<size-1;i++){
        swapped = false;
        for(int j=0;j<size-i-1;j++){
        	if(input[j]>input[j+1]){
            	swap(&input[j], &input[j+1]);
           		swapped = true;
        	}
        }
        if (swapped == false)
        break;
    }
}
/*
Without writing 2 functions above, one can simply use the code below.
---------------------OR----------------------
void bubbleSort(int *input, int size)
{
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
        	if(input[j]>input[j+1]){
            	int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
        	}
        }
    }
}
*/
int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}