#include <bits/stdc++.h>
using namespace std;
#define N 3

int findMaxValue(int mat[][N]){

    int maxValue = INT_MIN;

    for (int a = 0; a < N - 1; a++)
    for (int b = 0; b < N - 1; b++)
        for (int d = a + 1; d < N; d++)
        for (int e = b + 1; e < N; e++)
            if (maxValue < (mat[d][e] - mat[a][b])){
                maxValue = mat[d][e] - mat[a][b];
            }
 
    return maxValue;
}
 
int main(){
    int mat[N][N];
    cout<<"Enter to the value to the matrix: ";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    
    cout << "Maximum Value is "<< findMaxValue(mat);
 
    return 0;
}