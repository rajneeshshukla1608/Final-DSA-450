#include<stdio.h>

int main(){   
    int n,i,k,j=0,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Element to the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0;i < n; i++){
       if (arr[i] < 0){
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
           j++;
       } 
    }
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
        return 0;
}
