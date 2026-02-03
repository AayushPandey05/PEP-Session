#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] <= nums[right]) {
            right = mid;
        } 
        else {
            left = mid + 1;
        }
    }

    return nums[left];        
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int res = findMin(nums);
    cout << res << " ";

    return 0;
}