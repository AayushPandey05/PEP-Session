#include<bits/stdc++.h>
using namespace std;

string firstRepChar(string s){
    vector<int> freq(26, 0);
    for(char c : s){
        freq[c - 'a']++;

        if(freq[c - 'a'] == 2){
            return string(1,c);  // converting char to string..
        }
    }

    return "-1";
}

int main(){
    string s;
    cin >> s;

    string res = firstRepChar(s);
    cout << res << " ";

    return 0;
}