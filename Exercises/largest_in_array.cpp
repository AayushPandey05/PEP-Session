#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
        
    int lar = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > lar){
            lar = arr[i];
        }
    }
        
    return lar;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = largest(arr);
    cout << "Largest elem is: " << res;

    return 0;
}