#include<bits/stdc++.h>
using namespace std;

int shipWithinDays(vector<int>& weights, int days){

}

int main(){
    int n;
    cin >> n;

    vector<int> weights(n);
    for(int i = 0; i < n; i++){
        cin >> weights[i];
    }

    int days;
    cin >> days;

    int res = shipWithinDays(weights, days);
    cout << res << " ";

    return 0;
}