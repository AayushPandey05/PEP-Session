#include<bits/stdc++.h>
using namespace std;

vector<int> nextLargerElement(vector<int>& arr) {

    stack<int> st;
    int n = arr.size();

    vector<int> ans(n);

    for(int i = n - 1; i >= 0; i--) {

        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(st.empty()){
            ans[i] = -1;
        }    
        else{
            ans[i] = st.top();
        }
        
        st.push(arr[i]);
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> res = nextLargerElement(arr);
    for(int x :  res){
        cout << x << " ";
    }

    return 0;
}