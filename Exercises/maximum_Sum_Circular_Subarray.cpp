#include<bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums){
    int n = nums.size();

    int currMin = nums[0], currMax = nums[0];
    int minSum = nums[0], maxSum = nums[0];

    int totalSum = nums[0];

    for(int i = 1; i < n; i++){

        // Kadanes for max
        currMax = max(currMax + nums[i], nums[i]);
        maxSum = max(maxSum, currMax);

        // kadanes for min
        currMin = min(currMin + nums[i], nums[i]);
        minSum = min(minSum, currMin);

        totalSum += nums[i];
    }

    int normal = maxSum;
    int circular = totalSum - minSum;
    
    if(minSum == totalSum){
        return normal;
    }

    return max(normal, circular);
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int res = maxSubarraySumCircular(nums);
    cout << res << " ";

    return 0;
}