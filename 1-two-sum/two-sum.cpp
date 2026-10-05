class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            int achieveTarget = target - nums[i]; 
            auto it = mpp.find(achieveTarget);
            if(it != mpp.end()){
                return {it->second, i};
            }else{
                mpp[nums[i]] = i;
            }
        }
        return {};
    }
};