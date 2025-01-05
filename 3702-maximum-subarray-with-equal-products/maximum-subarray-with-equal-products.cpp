#include <vector>
#include <numeric> // For gcd, lcm
#include <climits> // For LLONG_MAX
using namespace std;

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;

        for (int i = 0; i < n; ++i) {
            int currentGCD = nums[i];
            long long currentLCM = nums[i];
            long long currentProd = nums[i]; // Use long long for safety

            for (int j = i; j < n; ++j) {
                if (j > i) {
                    currentGCD = gcd(currentGCD, nums[j]);
                    
                    // Check for overflow before updating LCM
                    if (currentLCM > LLONG_MAX / nums[j]) break;
                    currentLCM = (currentLCM / gcd(currentLCM, nums[j])) * nums[j];
                    
                    // Check for overflow before updating product
                    if (currentProd > LLONG_MAX / nums[j]) break;
                    currentProd *= nums[j];
                }

                // Check the product-equivalent condition
                if (currentProd == currentGCD * currentLCM) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }
};
