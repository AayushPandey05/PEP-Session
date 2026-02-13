#include <bits/stdc++.h>
using namespace std;

vector<int> mergeTwo(vector<int> &a, vector<int> &b) {

    int i = 0, j = 0;
    vector<int> res;

    while(i < a.size() && j < b.size()) {
        if(a[i] <= b[j]) {
            res.push_back(a[i++]);
        }
        else{
            res.push_back(b[j++]);
        }
    }

    while(i < a.size()){
        res.push_back(a[i++]);
    }
    while(j < b.size()) {
        res.push_back(b[j++]);
    }
    return res;
}

vector<int> mergeK(vector<vector<int>> &A, int l, int r) {
    if(l == r) {
        return A[l];
    }

    int mid = (l + r) / 2;

    vector<int> left = mergeK(A, l, mid);
    vector<int> right = mergeK(A, mid + 1, r);

    return mergeTwo(left, right);
}

vector<int> solve(vector<vector<int>> &A) {
    if(A.size() == 0) {
        return {};
    }
    return mergeK(A, 0, A.size() - 1);
}

int main() {
    int k, n;
    cin >> k >> n;

    vector<vector<int>> A(k, vector<int>(n));
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    vector<int> res = solve(A);

    for(int x : res){
        cout << x << " ";
    }

    return 0;
}
