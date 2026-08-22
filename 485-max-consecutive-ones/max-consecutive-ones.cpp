class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                temp++;
            } else {
                if(count < temp) {
                    count = temp;
                }
                temp = 0;
            }
        }

        if(count < temp) {
            count = temp;
        }

        return count;
    }
};