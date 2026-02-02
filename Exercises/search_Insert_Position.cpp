#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target){
    int n = nums.size();

    int low = 0, high = n - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(target == mid){
            return mid;
        }
        else if(target > nums[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cin >> target;

    int res = searchInsert(nums, target);
    cout << res << " ";

    return 0;
}