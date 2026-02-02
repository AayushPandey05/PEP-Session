#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s){
    int freq[256] = {0};
    for(char x : s){
        freq[x]++;
    }

    for(int i = 0; i < s.length(); i++){
        if(freq[s[i]] == 1){
            return i;
        }
    }

    return -1;
}

int main(){
    string s;
    cin >> s;

    int res = firstUniqChar(s);
    cout << res << " " ;

    return 0;
}