#include<bits/stdc++.h>
using namespace std;

int countSquares(int N) {
    int a=sqrt(N);
    if(a*a==N) return a-1;
    else return a;
}

int main(){
    int n;
    cout<<"Enter the number to count the numbers of sqrt: ";
    cin>>n;
    cout<<countSquares(n);
    return 0;
}
