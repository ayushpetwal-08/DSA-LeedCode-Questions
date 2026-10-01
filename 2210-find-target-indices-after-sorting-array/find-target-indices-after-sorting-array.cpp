class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count_less = 0;
        int count_target = 0;
        for(int x : nums){
            if(x < target) count_less++;
            else if(x == target) count_target++;
        }
        vector<int>ans;
        for(int i=0; i<count_target; i++){
            ans.push_back(count_less + i);
        }
        return ans;
    }
};