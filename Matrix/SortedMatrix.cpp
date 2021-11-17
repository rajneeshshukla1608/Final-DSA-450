/*
Given an NxN matrix Mat. Sort all elements of the matrix.
*/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> SortedMatrix(vector<vector<int>> &matrix, int N) {
    
    vector<int> mat;
    int k = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat.push_back(matrix[i][j]);
        }
        
    }
    sort(mat.begin(), mat.end());
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = mat[k];
            k++;
        }
        
    }
    return matrix;
}

int main(){
    int N;
    cout<<"Enter the number of rxc as same: ";
    cin>>N;
    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    cout<<"The resultant sorted matrix will be:";
    matrix = SortedMatrix(matrix, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<matrix[i][j]<<endl;
        }
        
    }
}