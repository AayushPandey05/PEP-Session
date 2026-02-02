#include<bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int n = letters.size();
    int start = 0, end = n - 1;
    char ans = letters[0];

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(letters[mid] > target){
            ans = letters[mid];
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<char> letters(n);
    for(int i = 0; i < n; i++){
        cin >> letters[i];
    }

    char target;
    cin >> target;

    char res = nextGreatestLetter(letters, target);
    cout << res << " ";

    return 0;
}