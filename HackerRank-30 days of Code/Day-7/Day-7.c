#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;int arr_i;
    scanf("%d",&n);
     
    int *arr=malloc(sizeof(int)*n) ;

    for( arr_i=0;arr_i<n;arr_i++){
        scanf("%d",&arr[arr_i]);
    }
    for( arr_i=n-1;arr_i>=0;arr_i--)//for(int arr_i=n;arr_i>0;arr_i--;)
    {
        printf("%d ",arr[arr_i]);//printf("%d ",arr[arr_i-1]);
    }
    printf("\n");
    return 0;
}

