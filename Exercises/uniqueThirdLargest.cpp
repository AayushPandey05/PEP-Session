#include <bits/stdc++.h>
using namespace std;

int uniquethirdLargestElem(vector<int> &arr){
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for(int x : arr){
        if(x > first){
            if(x != first){
                third = second;
                second = first;
                first = x;
            }
        }
        else if(x > second && x != first){
            third = second;
            second = x;
        }
        else if(x > third && x != first && x != second){
            third = x;
        }
    }

    if(third == INT_MIN) {
        cout << "Third unique largest does not exist\n";
        return -1;
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

    int res = uniquethirdLargestElem(arr);
    if(res != -1)
        cout << "Third largest: " << res;

    return 0;
}
