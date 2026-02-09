#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr){
    int n = arr.size();
    if(n <= 2) return n;

    int k = 2; // first 2 always allowed

    for(int i = 2; i < n; i++){
        if(arr[i] != arr[k-2]){
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k = removeDuplicates(arr);

    for(int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
