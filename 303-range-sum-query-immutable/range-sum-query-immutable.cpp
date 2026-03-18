class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums=nums;
    }
    
    int sumRange(int left, int right) {
        int n = nums.size();
        vector<int> pre(n+1);
        for(int i=1; i<=n; i++) {
            pre[i] = pre[i-1] + nums[i-1];
        }
        if(left==0)
            return pre[right+1];
        else
            return (pre[right+1] - pre[left]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */