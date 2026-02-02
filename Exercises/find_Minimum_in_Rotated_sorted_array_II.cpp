int findMin(vector<int>& nums) {
    int n = nums.size();

    int start = 0, end = n - 1;
        
    while(start < end){
        int mid = start + (end - start) / 2;

        if(nums[mid] < nums[end]){
            end = mid;
        }

        else if(nums[mid] > nums[end]){
            start = mid + 1;
        }
        
        else{
            end--;
        }
    }
    return nums[start];
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int res = findMin(nums);
    cout << res << " ";

    return 0;
}