#include <bits/stdc++.h>
using namespace std;

int *arr;
int topIndex;
int sizeStack;

void initStack(int n) {
    sizeStack = n;
    arr = new int[sizeStack];
    topIndex = -1;
}

void push(int x) {
    if(topIndex == sizeStack - 1) return;   // full
    arr[++topIndex] = x;
}

void pop() {
    if(topIndex == -1) return;             // empty
    topIndex--;
}

int peek() {
    if(topIndex == -1) return -1;
    return arr[topIndex];
}

bool isEmpty() {
    return topIndex == -1;
}

bool isFull() {
    return topIndex == sizeStack - 1;
}

int main() {
    int cap;
    cout << "Enter stack capacity: ";
    cin >> cap;

    initStack(cap);

    cout << "Enter numbers (-1 to stop):" << endl;
    int x;
    while(true){
        cin >> x;
        if(x == -1) break;
        push(x);
    }

    cout << "Top element: " << peek() << endl;

    cout << "Popping all: ";
    while(!isEmpty()){
        cout << peek() << " ";
        pop();
    }

    return 0;
}
