#include <bits/stdc++.h>
using namespace std;

int searchMe(vector<vector<int>> &arr, int key){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(arr[i][j] == key){
                return 1;
            }
        }
    }
    return -1;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m)); 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int key;
    cin >> key;

    int res = searchMe(arr, key);
    cout << res << endl;

    return 0;
}
