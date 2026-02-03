#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target){

    int n = nums.size();
    
    int left = 0;
    for(int i = 0; i < n; i++){
        
        if(nums[left] == target){
            return true;
        }

        left++;
    }

    return false;
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

    bool res = search(nums, target);
    if(res){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}