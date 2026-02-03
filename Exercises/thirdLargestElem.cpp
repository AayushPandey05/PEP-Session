#include<bits/stdc++.h>
using namespace std;

//! optimised
int thirdLargestElem(vector<int> &arr){
    int n = arr.size();

    int first = -1, Second = -1, third = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > first){

            third = Second;
            Second = first;
            first = arr[i];
        }

        else if(arr[i] > Second){
            third = Second;
            Second = arr[i];
        }

        else if(arr[i] > third){
            third = arr[i];
        }
    }

    return third;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = thirdLargestElem(arr);
    cout << "third largest: " << res;

    return 0;
}