#include<bits/stdc++.h>
using namespace std;

vector<int> snakePattern(vector<vector<int>>& matrix){
    int n = matrix.size();
    vector<int> ans;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){

            for(int j = 0; j < n; j++){
                ans.push_back(matrix[i][j]);
            }
        }
        else{
            for(int j = n - 1; j >= 0; j--){
                ans.push_back(matrix[i][j]);
            }
        }
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    vector<int> res = snakePattern(matrix);
    for(int x : res){
        cout << x << " ";
    }

    return 0;
}