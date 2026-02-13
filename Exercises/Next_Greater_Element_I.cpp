#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    unordered_map<int, int> mp;   // element -> next greater
    stack<int> st;

    for(int i = 0; i < nums2.size(); i++){

        while(!st.empty() && nums2[i] > st.top()){
            mp[st.top()] = nums2[i];
            st.pop();
        }

        st.push(nums2[i]);
    }

    // elements left in stack have no next greater
    while(!st.empty()){
        mp[st.top()] = -1;
        st.pop();
    }

    vector<int> ans;
    for(int x : nums1){
        ans.push_back(mp[x]);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums1(n);
    for(int i = 0; i < n; i++){
        cin >> nums1[i];
    }

    int m;
    cin >> m;

    vector<int> nums2(m);
    for(int i = 0; i < m; i++){
        cin >> nums2[i];
    }

    vector<int> res = nextGreaterElement(nums1, nums2);
    for(int x : res){
        cout << x << " ";
    }

    return 0;
}
