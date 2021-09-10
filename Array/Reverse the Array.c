#include<stdio.h>
int main(){
    int i,length,n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    length = sizeof(arr)/sizeof(arr[1]);
    int end = length - 1;
    printf("Enter the Number in to the array");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }    
    
    for(i = end; i >= 0; --i){
        printf("%d", arr[i]);
    }
    return 0;
}
