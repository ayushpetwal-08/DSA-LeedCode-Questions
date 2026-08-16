class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> hash;
       for(int i=0; i<nums.size(); i++){
            hash[nums[i]] = i;
       }
       for(int i=0; i<nums.size(); i++){
        int comply = target - nums[i];
        if(hash.find(comply) != hash.end() && hash[comply] != i){
            return {hash[comply], i};
        }
       }
       return {};
    }
};