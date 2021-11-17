#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int k, int r, int c, vector<vector<int>> mat){

    vector<int> arr;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr.push_back(mat[i][j]);
        }
        
    }
    sort(arr.begin(), arr.end());
    return arr[k -1 ];
    
}

int main(){
    int r,c;
    cout<<"Enter the number of rows and column: ";
    cin>>r>>c;
    vector<vector<int>> mat(r, vector<int>(c));
    cout<<"Enter the element to the matrix: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>mat[i][j];
        }
    }
    int k;
    cout<<"Enter the k to find the smallest of: ";
    cin>>k;
    cout<<kthSmallest(k, r, c,mat);
    return 0;
}