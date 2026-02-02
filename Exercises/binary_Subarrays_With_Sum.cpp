#include<bits/stdc++.h>
using namespace std;

int numSubarraysWithSum(vector<int>& nums, int goal) {
    int n = nums.size();
    unordered_map<int, int> mp;
    mp[0] = 1;

    int sum = 0, count = 0;

    for(int i = 0; i < n; i++){
        sum += nums[i];

        if(mp.find(sum - goal) != mp.end()){
            count += mp[sum - goal];
        }
        mp[sum]++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int goal;
    cin >> goal;

    int res = numSubarraysWithSum(nums, goal);
    cout << res << " ";

    return 0;
}