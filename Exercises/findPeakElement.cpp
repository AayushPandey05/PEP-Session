#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {

    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(nums[mid] < nums[mid + 1]){
            start = mid + 1;
        }

        else{
            end = mid;
        }

        //!..Update Mid...
        mid = start + (end - start) / 2;
    }

    return start;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int res = findPeakElement(nums);
    cout << res << " ";

    return 0;
}