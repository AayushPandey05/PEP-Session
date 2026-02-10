#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();

    int l = 0, r = m - 1;
    while(l < n && r >= 0){
        if(matrix[l][r] == target){
            return true;
        }
        else if(matrix[l][r] < target){
            l++;
        }
        else{
            r--;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

    bool res = searchMatrix(matrix, target);
    if(res){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}