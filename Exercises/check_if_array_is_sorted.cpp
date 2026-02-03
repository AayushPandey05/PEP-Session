#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr){
    int n = arr.size();

    for(int i = 1; i < n; i++){
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

    bool res = isSorted(arr);
    if(res){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}