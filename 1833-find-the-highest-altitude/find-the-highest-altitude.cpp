class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> pre(gain.size()+1, 0);
        int mx = pre[0];
        for(int i=1; i<=gain.size(); i++) {
            pre[i]+=gain[i-1]+pre[i-1];
            if(pre[i]>mx) 
                mx = pre[i];
        }
        return mx;
    }
};