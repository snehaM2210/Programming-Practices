#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int count=0;
    for(int i=0;i<size;i++){
        if(input[i]!=0)//to find the non-zero elements
            input[count++]=input[i];
    }
    for(int i=count;i<size;i++){ //to put o in the remaining places
        input[i]=0;
    }
}

int main()
{

	int t;
	cin >> t;
	
	while (t--)
	{

		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}