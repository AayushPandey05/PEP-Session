#include<bits/stdc++.h>
using namespace std;


//! MOCKED API
int BAD;

int isBadVersion(int version){
    return version >= BAD;
}
int firstBadVersion(int n){
    int low = 1, high = n;

    while(low < high){
        int mid = low + (high - low) / 2;

        if(isBadVersion(mid)){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}

int main(){
    int n;
    cin >> n;

    cout << "Enter first bad version";
    cin >> BAD;
    
    int res = firstBadVersion(n);
    cout << res << " ";

    return 0;
}