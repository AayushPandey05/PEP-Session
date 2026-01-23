#include <bits/stdc++.h>
using namespace std;

int maxElem(int arr[], int n){
    int maxElement = arr[0];   // missing semicolon fixed
    for(int i = 0; i < n; i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int minElem(int arr[], int n){
    int minElement = arr[0];   // missing semicolon fixed
    for(int i = 0; i < n; i++){
        if(arr[i] < minElement){   // was using wrong variable
            minElement = arr[i];
        }
    }
    return minElement;
}

int totalSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int arr[n];   // wrong declaration fixed
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res1 = maxElem(arr, n);
    cout << "MaxElem: " << res1 << endl;

    int res2 = minElem(arr, n);
    cout << "MinElem: " << res2 << endl;

    int res3 = totalSum(arr, n);
    cout << "TotalSum: " << res3 << endl;

    return 0;
}
