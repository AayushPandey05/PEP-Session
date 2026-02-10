#include<bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>>& mat){
    int n = mat.size();
    int m = mat[0].size();

    vector<int> ans;

    // top row from left to right
    for(int j = 0; j <m; j++){
        ans.push_back(mat[0][j]);
    }

    // last column, starting from 2nd row
    for(int i = 1; i < n; i++){
        ans.push_back(mat[i][m - 1]);
    }

    // Traverse the bottom row, starting from 
    // second last colum
    for(int j = m - 2; j >= 0; j--){
        ans.push_back(mat[n - 1][j]);
    }

    // Traverse the first column from bottom to 
    // up, starting from second last row and  
    // ending at second row.
    for(int i = n - 2; i > 0; i--){
        ans.push_back(mat[i][0]);
    }

    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    vector<int> res = boundaryTraversal(mat);
    for(int x : res){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}