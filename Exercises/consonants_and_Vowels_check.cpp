#include<bits/stdc++.h>
using namespace std;

void checkString(string s){
    int v = 0;
    int c = 0;

    for(char ch : s){
        if(isalpha(ch)){        // checking if the ch is letters or not
            ch = tolower(ch);

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                v++;
            }
            else{
                c++;
            }
        }
    }

    if(v > c){
        cout << "Yes";
    }

    else if(v < c){
        cout << "No";
    }

    else{
        cout << "Same";
    }

    cout << endl;
}

int main(){
    string s;
    getline(cin, s);

    checkString(s);

    return 0;
}