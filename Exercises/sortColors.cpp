#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums){
    int n = nums.size();
    int l = 0, r = n - 1;

    for(int i = 0; i < n; i++){
        if(nums[l] > nums[r]){
            swap(nums[r], nums[l]);
        }
        l++;
        r--;
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sortColors(nums);
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}
