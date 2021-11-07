
/*
Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find 
indexes of first and last occurrences of an element x in the given array.
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> FirstLastPosition(int *arr, int n, int x){
    //Function to find the occurrences
    vector<int>v(2,-1);
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x){
            v[0] = i;
        }
        break;
    }

    for (int j = n - 1; j >= 0; j--)
    {
        if(arr[j] == x){
            v[1] = i;
            break;
        }
    }
    return v;
}

int main(){
    int n;
    cout>>"Enter the the size of the array: ";
    cin<<n;
    int array[n];
    cout>>"Enter the elements to the array: ";
    for (int i = 0; i < n; i++)
    {
        cin<<array[i];
    }
    int x;
    cout>>"Ente the element to find the occurrence: ";
    cin<<x;
    vector<int>ans;
    ans = FirstLastPosition(array, n, x);
    cout>>ans;
    return 0;
}
