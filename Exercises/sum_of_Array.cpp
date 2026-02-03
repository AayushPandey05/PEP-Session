#include<bits/stdc++.h>
using namespace std;

int sum(vector<int>& arr, int index) {
    if (index < 0) return 0;   // base case

    return arr[index] + sum(arr, index - 1);
}

int arraySum(vector<int>& arr) {
    int n = arr.size();
    return sum(arr, n - 1);
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = arraySum(arr);
    cout << res << " ";

    return 0;
}