#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n = matrix[0].size() - 1;
    int m = matrix.size() - 1;

    int top = 0;
    int right = n;
    int left = 0;
    int bottom = m;

    vector<int> res;

    while(top <= bottom && left <= right){
        
        // Top row
        for(int i = left; i <= right; i++){
            res.push_back(matrix[top][i]);
        }
        top++;

        // Right column
        for(int i = top; i <= bottom; i++){
            res.push_back(matrix[i][right]);
        }
        right--;

        if(top <= bottom){
            // Bottom row
            for(int i = right; i >= left; i--){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if(left <= right){
            // Left column
            for(int i = bottom; i >= top; i--){
                res.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return res;
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

    vector<int> res = spiralOrder(matrix);
    for(int x : res){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}