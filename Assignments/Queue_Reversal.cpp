#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q) {
    if(q.empty()) return;

    int x = q.front();
    q.pop();

    reverseQueue(q);

    q.push(x);
}

int main() {

    int n;
    cin >> n;

    queue<int> q;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    reverseQueue(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
