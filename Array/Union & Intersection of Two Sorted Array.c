#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, m, i, *itsn,*uni, k,l,f=0;
    int *recieveArray;
    printf("Enter the size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the Element to the first array: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the Element to the second array: ");
    for (i = 0; i < m; i++){
        scanf("%d", &arr2[i]);
    }

    // intersection start from here
    k = 0 ;
    itsn = (int*)malloc(sizeof(int));
    for(i = 0 ; i < n; i++) {
        for(int j = 0 ; j < m ; j++){
            if(arr1[i] == arr2[j]){
                f = 0;
                for(l = 0 ; l < k ; l++){
                    if(arr1[i] == itsn[l])
                        f = 1;
                }
                if(f==0){
                    itsn = (int*)realloc(itsn,(k + 1) * sizeof(int));
                    itsn[k] = arr1[i];
                    k++;
                }
            }
        }
    }
    printf("\nIntersection:  \n");
    for(i = 0 ; i < k ; i++){
        printf(" %d ",itsn[i]);
    }

    // intersection end here
    // Union Starts from here
    k = 0;
    uni = (int*)malloc(sizeof(int));
    for(i = 0 ; i < n ; i++){
        f = 0;
        for(l = 0 ; l < k ; l++){
            if(arr1[i] == uni[l])
                f = 1;
        }
        if(f == 0){
            uni = (int*)realloc(uni,(k + 1 ) * sizeof(int));
            uni[k] = arr1[i];
            k++;
        }                                                          
    }

    for(int j = 0 ; j < m ; j++){
        f = 0;
        for(l = 0 ; l < k ; l++){
            if(arr2[j] == uni[l])
                f = 1;
        }
        if(f == 0){
            uni = (int*)realloc(uni,(k + 1 ) * sizeof(int));
            uni[k] = arr2[j];
            k++;
        } 
    }


    // Union end here
    printf("\nUnion: \n");
   for (i = 0; i < k; i++)
   {
       printf(" %d ", uni[i]);
   }
   return 0;
}
