#include<bits/stdc++.h>
using namespace std;

bool checking(vector<int>& piles, int h, int mid){
    int reqTime = 0;
    for(int i = 0; i < piles;.size(); i++){
        reqTime += (piles[i] + mid - i) / mid;
    }
    return reqTime <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    
}

int main(){
    int n;
    cin >> n;

    vector<int> piles(n);
    for(int i = 0; i < n; i++){
        cin >> piles[n];
    }

    int h;
    cin >> h;

    int res = minEatingSpeed(piles, h);
    cout << res << " ";

    return 0;
}