#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums){
    int n = nums.size();

    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum += nums[i];
    }

    int leftSum = 0;
    for(int i = 0; i < n; i++){
        int rightSum = sum - leftSum - nums[i];

        if(leftSum == rightSum){
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int res = pivotIndex(nums);
    cout << res << " ";

    return 0;
}