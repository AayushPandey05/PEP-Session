#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {
    for(int i = 1; i < arr.size(); i++){
        if(arr[i - 1] > arr[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = isSorted(arr);

    if(res){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}
