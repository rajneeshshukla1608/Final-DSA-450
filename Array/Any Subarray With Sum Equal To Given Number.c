/*Find the subarray whose sum equal to given sum*/
#include<stdio.h>
#include<stdlib.h>

int Subarray(int *arr, int count, int sum){

       int cursum = 0,j=0;
       for (int  i = 0; i < count; i++){
           cursum = cursum + arr[i];
           if (cursum == sum){
               return 1;
           }
           if(i == (count - 1)){
              i = j++;
              cursum = 0;
           }   
       }
       return 0;
}

int main(void){
    int n, sum;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in to the array: ");
    for (int i = 0; i < n; i++){
       scanf("%d", &arr[i]);
    }
    printf("Enter the number to Check The sum: ");
    scanf("%d", &sum);
    if(Subarray(arr, n, sum)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
