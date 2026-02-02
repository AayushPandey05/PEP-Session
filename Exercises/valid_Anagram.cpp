#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    vector<int> f1(26, 0);
    vector<int> f2(26, 0);

    for(char c : s){
        f1[c - 'a']++;
    }

    for(char x : t){
        f2[x - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(f1[i] != f2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    bool res = isAnagram(s, t);
    if(res){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}