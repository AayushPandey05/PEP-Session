#include<bits/stdc++.h>
using namespace std;

int minSwap(vector<int>& arr, int k){
    int n = arr.size();
    
    // Count how many elements are ≤ k
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= k){
            cnt++;
        }
    }

    // Count “bad” elements in the first window
    int bad = 0;
    for(int i = 0; i < cnt; i++){
        if(arr[i] > k){
            bad++;
        }
    }

    int ans = bad;

    // Slide the window
    int i = 0, j = cnt;

    while(j < n){
        if(arr[i] > k){
            bad--;
        }
        if(arr[j] > k){
            bad++;
        }

        ans = min(ans, bad);
        i++;
        j++;
    }

    return ans;
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

    int res = minSwap(arr, k);
    cout << res << " ";

    return 0;
}