/*This 40 line od code can find duplicates in an array smartly using Dynamic Memory Allocations so stay tuned: */
#include<stdio.h>
#include<stdlib.h>

void FindDuplicates(int *arr, int n){
   int *ithas, f = 0, k = 0;
   ithas = (int*)malloc(sizeof(int));
    for (int i = 0; i < n; i++){
        for (int  j = 0; j < n; j++){
            f = 0;
             if (i != j){
                if(arr[i] == arr[j]){
                   f = 0;
                   for (int l = 0; l < k; l++){
                      if (arr[i] == ithas[l])
                        f = 1;
                   }
                   if (f == 0){
                     ithas = (int*)realloc(ithas, (k + 1) * sizeof(int));
                     ithas[k] = arr[i];
                     k++;
                   }
                }
            }
        }
    }
    printf("\nDuplicates are:  \n");
    for(int i = 0 ; i < k ; i++)
        printf("%d ", ithas[i]);
}
int main(){
    int n; 
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter thr elements into the arrat : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    FindDuplicates(arr, n);
    return 0;
}
