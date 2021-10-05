#include<stdio.h>
#include<stdlib.h>


int main(void){
    int *arr1, *arr2,n , m , temp;
    printf("Only enter the sorted arrays\n");
    //First array
    printf("Enter Size of array: ");
    scanf("%d",&n);
    arr1 = (int*)malloc(n*sizeof(int));
    printf("Enter First Sorted Array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    //second Array
    arr2 = (int*)malloc(n*sizeof(int));
    printf("Enter the Second Sorted Array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++){
        arr1 = realloc(arr1, n + 1 + i);
        arr1[n + i] = 32700;
        for(int j = 0 ; j < n + i + 1 ; j++){
            if(arr1[j] > arr2[i]){ 
                temp = arr1[j];
                arr1[j] = arr2[i];
                for(int k =  j + 1 ; k < n + i + 1 ; k++){
                    arr1[k] = arr1[k] + temp;
                    temp = arr1[k] - temp;
                    arr1[k] = arr1[k] - temp;
                    j = n + i + 1;
                } 
            }
        }
    }
    free(arr2);
    printf("The sorted arrays are: ");
    for (int i = 0; i < n * 2; i++)
    {
        printf(" %d", arr1[i]);
    }
    int size = sizeof(arr1) / 2;
    int average = (arr1[size] + arr1[size + 1]) / 2;
    printf("\n The average will be: %d", average);
    return 0;
}