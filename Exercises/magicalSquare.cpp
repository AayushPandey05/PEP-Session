#include<bits/stdc++.h>
using namespace std;

long long countPerfectSquaresInRange(long long L, long long R){
    if(L > R){
        return 0;
    }

    long long start = ceil(sqrt(L));
    long long end = floor(sqrt(R));

    if(start > end){
        return 0;
    }

    return (end - start + 1);
}

int main(){
    long long L;
    cin >> L;

    long long R;
    cin >> R;

    int res = countPerfectSquaresInRange(L, R);
    cout << res << " ";

    return 0;
}