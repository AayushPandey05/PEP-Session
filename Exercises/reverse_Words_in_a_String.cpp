#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    int i = 0;

    vector<string> words;

    while (i < n) {
        // skip spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i >= n) break;

        string word = "";

        // collect characters of a word
        while (i < n && s[i] != ' ') {
            word.push_back(s[i]);
            i++;
        }

        words.push_back(word);
    }

    // reverse words
    reverse(words.begin(), words.end());

    // join with single spaces
    string result = "";
    for (int j = 0; j < words.size(); j++) {
        result += words[j];
        if (j < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    string s;
    getline(cin, s);   

    cout << reverseWords(s);
    return 0;
}
