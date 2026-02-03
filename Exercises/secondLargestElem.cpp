#include<bits/stdc++.h>
using namespace std;

int secondLar(int arr[], int n){
    int first = -1, Second = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            Second = first;
            first = arr[i];
        }

        else if(arr[i] < first && arr[i] > Second){
            Second = arr[i];
        }
    }
    return Second;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = secondLar(arr, n);
    cout << "Second Lar: " << res;

    return 0;
}