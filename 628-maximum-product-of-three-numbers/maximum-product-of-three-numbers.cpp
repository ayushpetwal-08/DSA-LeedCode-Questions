class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int productPos = nums[n-1] * nums[n-2] * nums[n-3];
        int productNegPos = nums[n-1] * nums[0] * nums[1];
        int product = max(productPos, productNegPos);
        return product;
    }
};