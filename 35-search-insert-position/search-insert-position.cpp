class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                return i;
            }else{
                for(int i=0; i<nums.size(); i++){
                    if(nums[i] < target){

                    }else{
                        return i;
                    }
                }
            }
        }
        return nums.size();
    }
};