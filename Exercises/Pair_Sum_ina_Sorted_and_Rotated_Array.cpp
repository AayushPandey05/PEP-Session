#include<bits/stdc++.h>
using namespace std;

bool pairSortedSum(vector<int>& arr, int target){
    int n = arr.size();

    int i;
    for(i = 0; i < n - 1; i++){     
        if(arr[i] > arr[i + 1]){
            break;
        }
    }

    // l is index of smallest
    int l = (i + 1) % n;

    // r is index of largest
    int r = i;

    while(l != r){

        int sum = arr[l] + arr[r];

        if(sum == target)
            return true;

        if(sum < target)
            l = (l + 1) % n;
        else
            r = (r - 1 + n) % n;
    }

    return false;
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

    bool res = pairSortedSum(arr, target);
    if(res) cout << "True";
    else cout << "False";

    return 0;
}
