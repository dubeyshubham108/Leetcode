class Solution {
public:
    int reverse(int x) {
        long long n = 0;  // Using long long to handle overflow
        while (x != 0) {
            int d = x % 10;
            n = n * 10 + d;
            // Check for overflow or underflow
            if (n > INT_MAX || n < INT_MIN) {
                return 0;
            }
            x /= 10;
        }
        return static_cast<int>(n);  // Convert back to int before returning
    }
};
