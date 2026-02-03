#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target) {
    int left = 0;
    long long sum = 0;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            return {left + 1, right + 1}; // 1-based indexing
        }
    }

    return {-1};
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<int> res = subarraySum(arr, target);

    if(res.size() == 1 && res[0] == -1){
        cout << -1;
    } else {
        cout << res[0] << " " << res[1];
    }

    return 0;
}
