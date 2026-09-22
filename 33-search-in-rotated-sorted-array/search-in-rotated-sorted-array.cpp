class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
    
            if (nums[mid] == target) {
                return mid;
            }
            
            // 2. Check if the left half is sorted
            if (nums[low] <= nums[mid]) {
                // Check if target lies within the sorted left half range
                if (target >= nums[low] && target < nums[mid]) {
                    high = mid - 1; 
                } else {
                    low = mid + 1;  
                }
            } 
            // 3. Otherwise, the right half must be sorted
            else {
                // Check if target lies within the sorted right half range
                if (target > nums[mid] && target <= nums[high]) {
                    low = mid + 1;  
                } else {
                    high = mid - 1; 
                }
            }
        }
        return -1;
    }
};
