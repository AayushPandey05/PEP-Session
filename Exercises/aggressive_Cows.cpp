#include<bits/stdc++.h>
using namespace std;

int aggressiveCows(vector<int> &stalls, int k) {
    
}

int main(){
    int n;
    cin >> n;

    vector<int> stalls(n);
    for(int i = 0; i < n; i++){
        cin >> stalls[i];
    }

    int k;
    cin >> k;

    int res = aggressiveCows(stalls, k);
    cout << res << " " ;


    return 0;
}