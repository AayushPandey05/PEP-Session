#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>& inputStack, int count, int size){

    // base case
    if(count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int N){
    int size = N + 1;          
    solve(inputStack, 0, size);
}

int main(){

    int N;
    cin >> N;

    int total = N + 1;

    stack<int> inputStack;

    for(int i = 0; i < total; i++){
        int x;
        cin >> x;
        inputStack.push(x);
    }

    deleteMiddle(inputStack, N);

    // print stack (top to bottom)
    while(!inputStack.empty()){
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;

    return 0;
}
