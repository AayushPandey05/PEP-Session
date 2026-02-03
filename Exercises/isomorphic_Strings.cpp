#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t){
    int lastS[256] = {0};
    int lastT[256] = {0};

    for(int i = 0; i < s.length(); i++){
        if(lastS[s[i]] != lastT[t[i]]){
            return false;
        }

        lastS[s[i]] = i + 1;
        lastT[t[i]] = i + 1;
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    string t;
    cin >> t;

    bool res = isIsomorphic(s, t);
    if(res){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}