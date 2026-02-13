#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){

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
        cin >> nums2[m];
    }

    vector<int> res = nextGreaterElement(nums1, nums2);
    for(int x :  res){
        cout << x << " ";
    }

    return 0;
}