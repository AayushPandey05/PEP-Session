#include<bits/stdc++.h>
using namespace std;

// bruteforce
void reversingArrayBruteForce(int arr[], int n){
    reverse(arr, arr + n);
}

//! Optimised TWO POINTER
void reversingArrayOptimised(int arr[], int n){
    int left = 0, right = n - 1;

    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

//! RECURSION
void helper(vector<int> &arr, int l, int e){
    if(l >= e) return;
    
    swap(arr[l], arr[e]);
    
    helper(arr, l + 1, e - 1);
}
    
void reverseArray(vector<int> &arr) {
    helper(arr, 0, arr.size() - 1);
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