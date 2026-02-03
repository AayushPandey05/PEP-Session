#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> v;

    int n = nums.size();
    int first = -1, last = -1;

    int l = 0, r = n - 1;
    while(l <= r){
        int mid = l + (r - l) / 2;

        if(nums[mid] == target){
            first = mid;
            r = mid - 1;  
        }

        else if(nums[mid] < target){
            l = mid + 1;
        }
        
        else{
            r = mid - 1;
        }
    }

    l = 0; 
    r = n - 1;
    while(l <= r){
        int mid = l + (r - l) / 2;

        if(nums[mid] == target){
            last = mid;
            l = mid + 1; 
        }

        else if(nums[mid] < target){
            l = mid + 1;
        }
        
        else{
            r = mid - 1;
        }
    }

    v.push_back(first);
    v.push_back(last);

    return v;
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

    vector<int> res = searchRange(nums, target);
    for(int x : res){
        cout << x << " ";
    }

    return 0;
}