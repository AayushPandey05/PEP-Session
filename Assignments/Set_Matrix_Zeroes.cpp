#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    bool firstRow = false, firstCol = false;

    // check first row
    for(int j = 0; j < m; j++){
        if(matrix[0][j] == 0) firstRow = true;
    }

    // check first col
    for(int i = 0; i < n; i++){
        if(matrix[i][0] == 0) firstCol = true;
    }

    // mark using first row and first col
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // make zeros using marks
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    // handle first row
    if(firstRow){
        for(int j = 0; j < m; j++) matrix[0][j] = 0;
    }

    // handle first col
    if(firstCol){
        for(int i = 0; i < n; i++) matrix[i][0] = 0;
    }
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

    setZeroes(matrix);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
