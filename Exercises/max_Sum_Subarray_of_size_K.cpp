#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr, int k){
    int n = arr.size();

    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }

    int res = sum;

    for(int i = k; i < n; i++){
        sum += arr[i]; // add element
        sum -= arr[i - k]; // remove element

        res = max(res, sum);
    }
    return res;

}


int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int res = maxSubarraySum(arr, k);
    cout << res << " ";

    return 0;
}