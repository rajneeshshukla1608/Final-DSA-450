#include<stdio.h>

int MaxMin(int *arr, int length){
     int max = arr[0];
     int min = arr[0];
     int i;
     for(i = 1; i < length; i++){
         if(arr[i] > max){
             max = arr[i];
         } if(arr[i] < min){
             min = arr[i];
         }
     }
     printf("%d%d", max,min);
     return 0;
}

int main(){
    int n,i,length;
    scanf("%d", &n);
    int arr[n];
    length = sizeof(arr)/sizeof(arr[1]);
    for(i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    MaxMin(arr, length);
    return 0;
}
