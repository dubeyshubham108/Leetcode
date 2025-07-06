class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, h = nums.size()-1, k=0, mid;
        while(l<=h) {
            mid = l + (h-l)/2;
            if(nums[mid] == target) {
                k=1;
                break;
            } else if(nums[mid] > target) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if(k==1)
            return mid;
        else 
            return l;
    }
};