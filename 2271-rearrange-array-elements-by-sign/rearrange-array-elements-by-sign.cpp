class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n, 0);
        int posIdx = 0; int negIdx = 1;
        for(int i = 0 ; i < n; i++){
            if(nums[i] > 0){
                res[posIdx] = nums[i];
                posIdx += 2;
            }else{
                res[negIdx] = nums[i];
                negIdx +=2;
            }
        }
        return {res};
    }
};