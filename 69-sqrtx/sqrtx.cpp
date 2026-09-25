class Solution {
public:
    int mySqrt(int x) {
        long long low = 0; 
        long long high = x;
        int sqrt = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if((long long)mid * mid == x) return mid;
            else if ((long long)mid * mid < x){
                sqrt = mid;
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }
        return sqrt;
    }
};