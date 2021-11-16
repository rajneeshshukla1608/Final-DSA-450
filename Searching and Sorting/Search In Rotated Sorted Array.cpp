#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }

int main(){
    //There will be a sorted rotated array so,
    int n;
    cout<<"How many number of items you want to enter: ";
    cin>>n;
    vector<int> nums(n);
    
    for(int i = 0; i < nums.size(); i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<search(nums, target);
    return 0;
}
