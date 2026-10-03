int isStudents(vector<int>& nums, int pages){
    int stud = 1, pageStudent = 0;
    for(int i=0; i<nums.size(); i++){
        if(pageStudent + nums[i] <= pages){
            pageStudent += nums[i];
        }else {
            stud++;
            pageStudent = nums[i];
        }
    }
    return stud;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = INT_MIN, high = 0;
        for(int i=0; i<nums.size(); i++){
            if(low < nums[i]) low = nums[i];
            high += nums[i];
        }
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int isStud = isStudents(nums, mid);
            if(isStud <= k) {
                ans = mid;
                high = mid - 1;
            }else {
                low = mid + 1;
            }
        }
        return ans;
    }
};