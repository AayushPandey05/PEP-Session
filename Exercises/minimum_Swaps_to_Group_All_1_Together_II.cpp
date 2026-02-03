#include<bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>& nums){
    int n = nums.size();

    int one = 0;
    for(int x : nums){
        if(x == 1){
            one++;
        }
    }

    // if all 0 and 1 already grouped
    if(one <= 1){
        return 0;
    }

    // duplicating array to handle circular nature
    vector<int> arr = nums;
    arr.insert(arr.end(), nums.begin(), nums.end());

    int zero = 0;
    for(int i = 0; i < one; i++){
        if(arr[i] == 0){
            zero++;
        }
    }

    int ans = zero;

    // sliding window
    int i = 0, j = one;
    while(j < n + one){
        if(arr[i] == 0) {
            zero--;
        }
        if(arr[j] == 0){
            zero++;
        }

        ans = min(ans, zero);

        i++;
        j++;
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int res = minSwaps(nums);
    cout << res << " ";

    return 0;
}