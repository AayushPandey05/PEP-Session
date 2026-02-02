#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    
    int left = 0;
    for(int i = 0; i < n; i++){
        if(nums[left] == target){
            return i;
        }
        left++;
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

    int target;
    cin >> target

    int res = search(nums, target);
    cout << res << " ";

    return 0;
}