#include<bits/stdc++.h>
using namespace std;

int removingDuplicate(vector<int>& arr){
    int n = arr.size();

    if(n == 0){
        return 0;
    }

    int pos = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i - 1]){
            arr[pos] = arr[i];
            pos++;
        }
    }
    return pos;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = removingDuplicate(arr);
    cout << res << " ";

    return 0;
}