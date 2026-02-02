#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main(){
    string s;
    cin >> s;

    bool res = isPalindrome(s);
    if(res){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}