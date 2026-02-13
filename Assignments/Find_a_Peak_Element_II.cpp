#include<bits/stdc++.h>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat){
    int n = mat.size();
    int m = mat[0].size();

    int low = 0, high = m - 1;

    while(low <= high){

        int mid = (low + high) / 2;

        // find row index of max element in mid column
        int maxRow = 0;
        for(int i = 0; i < n; i++){
            if(mat[i][mid] > mat[maxRow][mid]){
                maxRow = i;
            }
        }

        int left = (mid - 1 >= 0) ? mat[maxRow][mid - 1] : -1;
        int right = (mid + 1 < m) ? mat[maxRow][mid + 1] : -1;

        // check peak
        if(mat[maxRow][mid] > left && mat[maxRow][mid] > right){
            return {maxRow, mid};
        }
        
        else if(right > mat[maxRow][mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return {-1, -1}; 
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

    vector<int> res = findPeakGrid(mat);
    for(int x : res){
        cout << x << " ";
    }

    return 0;
}
