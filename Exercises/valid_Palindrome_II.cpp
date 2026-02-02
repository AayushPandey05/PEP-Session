#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int l, int r){
    while(l < r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

bool validPalindrome(string s) {
    int l = 0;
    int r = s.length() - 1;

    while(l < r){
        if(s[l] != s[r]){
            // delete one character (either left or right)
            return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
        }
        l++;
        r--;
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    if(validPalindrome(s)){
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
