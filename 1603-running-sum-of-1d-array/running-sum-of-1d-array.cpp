class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n+1, 0);
        for(int i=1; i<=n; i++) 
            pre[i] = pre[i-1]+nums[i-1];
        pre.erase(pre.begin());
        return pre;
    }
};