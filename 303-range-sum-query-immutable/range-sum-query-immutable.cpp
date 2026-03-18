class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
        int n = nums.size();
        for(int i=1; i<n; i++) {
            this->nums[i]+=this->nums[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return left == 0 ? nums[right] : nums[right]-nums[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */