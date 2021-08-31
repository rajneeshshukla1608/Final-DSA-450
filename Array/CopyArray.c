#include<stdio.h>
int main(){
    int n,i=0,j=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    printf("Enter the Element to the array: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }
    for (i = 0; i < n; i++){
        printf("%d", arr2[i]);
    }
  return 0;
}
