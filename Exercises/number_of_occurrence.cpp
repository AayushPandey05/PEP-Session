#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>& arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int cnt = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            cnt = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return cnt;
}

int lastOcc(vector<int>& arr, int target){
    int start = 0, end = arr.size() - 1;
    int cnt = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            cnt = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return cnt;
}

int countFreq(vector<int>& arr, int target){
    int first = firstOcc(arr, target);
    if(first == -1){
        return 0;
    }

    int last = lastOcc(arr, target);
    return last - first + 1;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int res = countFreq(arr, target);
    cout << res << " ";

    return 0;
}