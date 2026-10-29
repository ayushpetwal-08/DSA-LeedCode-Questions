class Solution {
public:
    void subsetrescursion(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubset){
        if(i == nums.size()){
            allsubset.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        subsetrescursion(nums, ans, i+1, allsubset);
        ans.pop_back();
        subsetrescursion(nums, ans, i+1, allsubset);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allsubset;
        vector<int>ans;
        subsetrescursion(nums, ans, 0, allsubset);
        return allsubset;
    }
};