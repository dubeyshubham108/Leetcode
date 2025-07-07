class Solution {
public:
    bool isChecker(int k, vector<int> &piles, int h) {
        long long hours=0;
        for(int i=0; i<piles.size(); i++) {
            hours+=ceil(piles[i]*1.0/k);
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = INT_MIN;
        for(int i=0; i<piles.size(); i++) 
            high = max(high, piles[i]);
        int ans;
        while(low<=high) {
            int mid = (low + high)/2;
            if(isChecker(mid, piles, h)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};


