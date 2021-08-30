#include<stdio.h>

int sort (int *array , int length){
    int temp;
    for(int i =0 ; i < length ; i++){
        for( int j = 0 ; j < length - i -1; j++){
            if( array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return 0;
}

int kthMaxMin(int *arr, int length, int k){
    printf("kth Min - %d\n", arr[k-1]);
    printf("kth Max - %d", arr[length - k]);
    return 0;
}

int main(){   
    int n,i,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Element to the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    label:
    printf("Enter the Kth element to find: ");
    scanf("%d", &k);
    if (k>n){
        printf("Value of \"k\" must be Less then or equal to \"n\" that is %d\n",n);
        goto label;
    }
    sort(arr,n);
    kthMaxMin(arr,n,k);
    return 0;
}
