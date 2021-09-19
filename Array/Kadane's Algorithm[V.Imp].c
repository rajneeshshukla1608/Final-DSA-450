/*Kadan's Algorithm for largest sum subarray problem
the brutforce approach will take O(n^2) Complexity which is a exponential solution not an optimal solution, So
the optimal solution is Kadan's Algorihm which is used to solve this problem in O(n) times
Complexity - O(n) - Good
Brutforce approach - o(n^2) - Bad
It can get more Optimal Solution....
*/
 #include<stdio.h>

void LargestSumSubarray(int *arr, int n){
    
    int cursum = 0;
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        cursum = cursum +  arr[i];
        
        if(cursum > maxsum){
            maxsum = cursum;        
            }
        
        if (cursum < 0){
            
            cursum = 0;

        }
    }
    
     printf(" The maximum sum of the subarray is: %d", maxsum);
}

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in to the array: ");
    for (int i = 0; i < n; i++){
       scanf("%d", &arr[i]);
    }
    
    LargestSumSubarray(arr, n);
  
}
