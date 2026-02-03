#include<bits/stdc++.h>
using namespace std;

bool canPlaceBalls(vector<int>& pos, int m, int dist) {
    int balls = 1;              // first ball
    int last = pos[0];

    for (int i = 1; i < pos.size(); i++) {
        if (pos[i] - last >= dist) {
            balls++;
            last = pos[i];
        }
    }
    return balls >= m;
}

int maxDistance(vector<int>& position, int m) {
    sort(position.begin(), position.end());

    int low = 1;
    int high = position.back() - position.front();
    int answer = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canPlaceBalls(position, m, mid)) {
            answer = mid;
            low = mid + 1;   // try bigger distance
        } 

        else {
            high = mid - 1;  // try smaller distance
        }
    }
    return answer;
}

int main(){
    int n;
    cin >> n;

    vector<int> position(n);
    for(int i = 0; i < n ;i++){
        cin >> position[i];
    }

    int m;
    cin >> m;

    int res = maxDistance(position, m);
    cout << res << " ";

    return 0;
}