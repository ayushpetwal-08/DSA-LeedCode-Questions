class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(currentSum < 0){
                currentSum = 0;
            }
            currentSum += nums[i];
            maxi = max(maxi, currentSum);
        }

        return maxi;
    }
};