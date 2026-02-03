#include<bits/stdc++.h>
using namespace std;

int nthRoot(int n, int m){
    int low = 1, high = m;

    if(m == 0){
        return 0;  // error case
    }
    
    while(low <= high){
        long long mid = low + (high - low) / 2;
        long long val = 1;

        for(int i = 0; i < n; i++){
            val *= mid;
            if(val > m){
                break;
            }
        }

        if(val == m){
            return mid;
        }
        else if(val < m){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;

    int res = nthRoot(n,m);
    cout << res << " ";

    return 0;
}