#include<bits/stdc++.h>
using namespace std;

string reverseString(string& s){
    int start = 0;
    int end = s.length() - 1;

    while(start < end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    return s;
}

int main(){
    string s;
    getline(cin, s);

    string res = reverseString(s);
    cout << res << " ";

    return 0;
}