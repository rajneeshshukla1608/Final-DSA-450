#include<stdio.h>

int Subset_Array(int *mainarr, int *subarr, int n, int m){
    
    int j = 0;
    for(int i = 0; i < n; i++){

        if(mainarr[i] == subarr[j]){
            
            if( j < m){
                j++;
            } else {
                break;
            }
            i = 0;
        }
    }
    if(j == m){
        printf("True");
    }
    else{
        printf("False");
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int mainarr[n];
    printf("Enter the numbers into the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &mainarr[i]);
    }
    int m;
    printf("Enter the size of second array: ");
    scanf("%d", &m);
    int subarr[m];
    printf("Enter the elements into the subarray: ");
    for(int i = 0; i < m; i++){
        scanf("%d", &subarr[i]);
    }
    Subset_Array(mainarr, subarr, n, m);
}
