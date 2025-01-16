class Solution {
public:
    int reverse(int x) {
        long long n=0;
        while(x) {
            int d=x%10;
            n= n*10 + d;
            if(n>INT_MAX || (n==INT_MAX / 10 && d==7))
                return 0;
            if(n<INT_MIN || (n==INT_MIN / 10 && d == -8))
                return 0;
            // n= n*10 + d;
            x/=10;
        }
        return n;
    }
};