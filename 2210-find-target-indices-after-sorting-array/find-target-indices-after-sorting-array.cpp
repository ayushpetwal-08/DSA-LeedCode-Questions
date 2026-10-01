int firstOccurence(vector<int>& nums, int target){
    int low = 0, high = nums.size() - 1;
    int first = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            first = mid;
            high = mid - 1;
        }else if(target > nums[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return first;
}
int lastOccurence(vector<int>& nums, int target){
    int low = 0, high = nums.size() - 1;
    int last = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            last = mid;
            low = mid + 1;
        }else if(target > nums[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return last;
}

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int first = firstOccurence(nums, target);
        if(first == -1) return {};
        int last = lastOccurence(nums, target);
        vector<int>ans;
        for(int i=first; i<= last; i++){
            ans.push_back(i);
        }
        return ans;
    }
};