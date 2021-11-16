#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &matrix, int r, int c){

        vector<int> res;

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                res.push_back(matrix[i][j]);
            }
        }
        sort(res.begin(), res.end());
        int median = (r*c) / 2;
        return res[median];

}

int main(){
    int r,c;
    cout<<"Enter the number of rows and number of column(rxc):";
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int>(c));
    cout<<"Enter the element to matrix: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    cout<<"The resultant median is: "<<median(matrix, r, c)<<endl;
}
