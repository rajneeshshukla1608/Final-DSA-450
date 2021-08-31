#include<stdio.h>
int CyclicRotate(int *arr, int n){
    int x = arr[n - 1], i;
   for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
   arr[0] = x;

   for (i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
   return 0;
}
int main(){
    int n,i=0,j=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Element to the array: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    CyclicRotate(arr, n);
  return 0;
}
