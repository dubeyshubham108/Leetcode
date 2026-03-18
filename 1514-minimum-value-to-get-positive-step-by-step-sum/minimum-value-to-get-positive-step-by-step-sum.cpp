class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int m = INT_MAX;
        vector<int> pre(n+1);
        for(int i=1; i<=n; i++) {
            pre[i] = pre[i-1] + nums[i-1];
            if(m > pre[i]) 
                m = pre[i];
        }
        if(m<0) 
            return m*(-1)+1;
        return 1;
    }
};