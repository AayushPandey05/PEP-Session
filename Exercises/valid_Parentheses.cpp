#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> x;

    for(int i=0; i < s.length(); i++){

        char ch = s[i];

        //if opening bracket, stack push
        //if close bracket, stacktop check and pop

        if(ch == '(' || ch == '{' || ch == '[') {
            x.push(ch);
        }

        else{

            //for closing bracket
            if(!x.empty()) {
                char top = x.top();

                if( (ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    x.pop();
                }

                else{
                    return false;
                }
            }

            else{
                return false;
            }
        }
    }

    if(x.empty()){
        return true;
    }

    else{
        return false;
    }
}

int main(){
    string s;
    getline(cin, s);

    bool res = isValid(s);
    if(res){
        cout << "Valid" << endl;
    }
    else{
        cout << "Not Valid" << endl;
    }

    return 0;
}