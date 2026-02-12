#include<bits/stdc++.h>
using namespace std;

int *arr;
int sizeQ;
int frontIndex;
int rearIndex;
int cnt;

void initQueue(int n) {
    sizeQ = n;
    arr = new int[sizeQ];
    frontIndex = 0;
    rearIndex = -1;
    cnt = 0;
}

bool isEmpty() {
    return cnt == 0;
}

bool isFull() {
    return cnt == sizeQ;
}

void enqueue(int x) {
    if(isFull()) return;

    rearIndex = (rearIndex + 1) % sizeQ;
    arr[rearIndex] = x;
    cnt++;
}

void dequeue() {
    if(isEmpty()) return;

    frontIndex = (frontIndex + 1) % sizeQ;
    cnt--;
}

int getFront() {
    if(isEmpty()) return -1;
    return arr[frontIndex];
}

int getRear() {
    if(isEmpty()) return -1;
    return arr[rearIndex];
}

int main() {

    int cap;
    cout << "Enter queue capacity: ";
    cin >> cap;

    initQueue(cap);

    cout << "Enter numbers to enqueue (-1 to stop):" << endl;

    int x;
    while(true){
        cin >> x;
        if(x == -1) break;

        if(isFull()){
            cout << "Queue is full!" << endl;
            break;
        }

        enqueue(x);
    }

    cout << "\nFront element: " << getFront() << endl;
    cout << "Rear element: " << getRear() << endl;

    cout << "\nDequeuing all elements: ";
    
    while(!isEmpty()){
        cout << getFront() << " ";
        dequeue();
    }

    return 0;
}
