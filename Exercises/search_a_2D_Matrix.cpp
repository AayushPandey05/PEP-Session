#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();

    int l = 0, r = (n * m) - 1;

    while(l <= r){
        int mid = l + (r - l) / 2;

        int x = matrix[mid / m][mid % m];  // converting the 2D matrix into 1D to apply BS

        if(x == target){
            return true;
        }
        else if(x < target){
            l = mid + 1;
        }
        else{
            r = mid - 1;
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