#include<bits/stdc++.h>
using namespace std;

// bruteforce
void reversingArrayBruteForce(int arr[], int n){
    reverse(arr, arr + n);
}

//! Optimised
void reversingArrayOptimised(int arr[], int n){
    int left = 0, right = n - 1;

    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

    reversingArrayBruteForce(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    reversingArrayOptimised(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}