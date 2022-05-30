class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans=long(dividend)/long(divisor);
        if(ans>(pow(2,31)-1)){
            return pow(2,31)-1;
        }
        if(ans<(-pow(2,31))){
            return -pow(2,31);
        }
        return int(ans);
    }
};