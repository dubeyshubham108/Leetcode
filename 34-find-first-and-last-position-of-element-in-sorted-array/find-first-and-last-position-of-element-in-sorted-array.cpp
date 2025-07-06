class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2, -1) ;
        if(nums.size()==0) {
            return v;
        } else {
            int l=0, h=nums.size()-1, mid;
            while(l<=h) {
                mid = l + (h-l)/2;
                if(nums[mid] == target) {
                    v[0]=mid;
                    h = mid-1;
                } else if(nums[mid] < target) {
                    l = mid+1;
                } else {
                    h = mid-1;
                }
            }
            l=0, h = nums.size() - 1, mid;
            while(l<=h) {
                mid = l + (h-l)/2;
                if(nums[mid] == target) {
                    v[1] = mid;
                    l = mid+1;
                } else if (nums[mid] < target) 
                    l = mid+1;
                else 
                    h = mid-1;
            }
            return v;
        }
            
    }
};