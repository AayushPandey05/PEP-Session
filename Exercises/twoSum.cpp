#include<bits/stdc++.h>
using namespace std;

// BRUTEFORCE 
vector<int> TwoSum(int nums[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    return {}; 
}

bool twosSum(vector<int>& nums, int target){
    int n = nums.size();
    int left = 0, right = n - 1;
    for(int i = 0; i < n; i++){
        if(nums[left] + nums[right] == target){
            return true;
        }
        left++;
        right--;
    }
    return false;
}

int main(){   
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<int> result = TwoSum(nums, n, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    return 0;
}