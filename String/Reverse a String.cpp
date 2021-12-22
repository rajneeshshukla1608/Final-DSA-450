class Solution {
public:
    void reverseString(vector<char>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    }
};
