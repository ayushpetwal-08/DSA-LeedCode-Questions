int findMax(vector<int>& nums){
    int maxi = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] > maxi) maxi = nums[i];
    }
    return maxi;
}
int sumOfDivision(vector<int>& nums, int divisor){
    int sumDivison = 0;
    for(int i=0; i<nums.size(); i++){
        int divison = ceil((double)nums[i] / (double)divisor);
        sumDivison += divison;
    }
    return sumDivison;
}

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = findMax(nums);
        while(low <= high){
            int mid = low + (high - low) / 2;
            int sumDivison = sumOfDivision(nums, mid);
            if(sumDivison <= threshold){
                high = mid - 1;
            }else {
                low = mid + 1;
            }
        }
        return low;
    }
};