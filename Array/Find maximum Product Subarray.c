/*kadan's Algorithm for largest sum subarray problem*/
#include<stdio.h>

void LargestSumSubarray(int *arr, int n){   
    int cursum = 1;
    int maxsum = 0;
    for (int i = 0; i < n; i++){

        cursum = cursum *  arr[i];

        if(cursum > maxsum){
            maxsum = cursum;        
            }
        if (cursum < 0){
            cursum = 1;
        }
    }
    printf(" The maximum sum of the subarray is: %d", maxsum);
}

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in to the array: ");
    for (int i = 0; i < n; i++){
       scanf("%d", &arr[i]);
    }
    LargestSumSubarray(arr, n);
    return 0;
}
