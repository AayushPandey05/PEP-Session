#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
   
    int n = arr.size();
    int sum = 0;
    int maxSum = INT_MIN;
        
    for(int i = 0; i < n; i++){
        sum += arr[i];
            
        maxSum = max(maxSum, sum);
            
        if(sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = maxSubarraySum(arr);
    cout << res << " ";

    return 0;
}