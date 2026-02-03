#include<bits/stdc++.h>
using namespace std;

int reverseExponentiation(int n){
    int m = n; // storing the originbnal number

    string s = to_string(n);
    reverse(s.begin(), s.end());

    int rev = stoi(s);

    return pow(m, rev);
}

int main(){

    int n;
    cin >> n;

    int res = reverseExponentiation(n);
    cout << res << " ";

    return 0;
}