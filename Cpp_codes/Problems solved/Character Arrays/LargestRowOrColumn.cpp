// Largest Row or Column
// For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
// Note :
// If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

// Second line onwards, the next 'N' lines or rows represent the ith row values.

// Each of the ith row constitutes 'M' column values separated by a single space.
// Output Format :
// For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
// OR
// If column sum is maximum, then print: "column" <col_index> <col_sum>
// It will be printed in a single line separated by a single space between each piece of information.

// Output for every test case will be printed in a seperate line.
//  Consider :
// If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value for the range of Integer.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3
// Time Limit: 1sec
// Sample Input 1 :
// 1
// 2 2 
// 1 1 
// 1 1
// Sample Output 1 :
// row 0 2
// Sample Input 2 :
// 2
// 3 3
// 3 6 9 
// 1 4 7 
// 2 8 9
// 4 2
// 1 2
// 90 100
// 3 40
// -10 200
// Sample Output 2 :
// column 2 25
// column 1 342

#include <iostream>
using namespace std;

void findLargest(int **input, int m, int n)
{
    if(m>1 && n>1){
    int i,j,k,l;
    int row_sum=0,col_sum=0;
    int index1=0,index2=0,sum1=0,sum2=0;
    //row sum
    for(i=0;i<m;i++){
        row_sum=0;
        for(j=0;j<n;j++){
            row_sum=row_sum+input[i][j];
        }
        if(row_sum>sum1){
            sum1=row_sum;
            index1=i;
        }
    }
    //column sum
    for(k=0;k<n;k++){
        col_sum=0;
        for(l=0;l<m;l++){
            col_sum=col_sum+input[l][k];
        }
        if(col_sum>sum2){
            sum2=col_sum;
            index2=k;
        }
    }
	//sum comparison    
    	if(sum1>=sum2){
        	cout<<"row"<< " "<<index1<<" " << sum1;
    	}else{
        	cout<<"column"<< " "<<index2<<" " << sum2;
    	}
	}
    else{
        cout<<"row"<< " "<<"0"<<" " <<"-2147483648";
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}