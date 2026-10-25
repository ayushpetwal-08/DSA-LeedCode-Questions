class Solution {
public:

    int recursionSearch(vector<int>& nums, int target, int low , int high){
        int mid = low + (high - low) / 2;
        if(low > high){
            return -1;
        }
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) return recursionSearch(nums, target, low, mid-1);
        else return recursionSearch(nums, target, mid+1, high);
    }

    int search(vector<int>& nums, int target) {
        return recursionSearch(nums, target, 0, nums.size()-1);
    }
};