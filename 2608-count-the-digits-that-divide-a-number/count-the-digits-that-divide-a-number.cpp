class Solution {
public:
    int countDigits(int num) {
        int c=num, result=0;
        while(c) {
            if(num%(c%10)==0) {
                result++;
            }
            c/=10;
        }
        return result;
    }
};