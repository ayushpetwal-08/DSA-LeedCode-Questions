class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int candidate = -1;
      int count = 0;
      for(int i=0; i<nums.size(); i++){
        if(count == 0){
            candidate = nums[i];
            count = 1;
        }else if(candidate == nums[i]){
            count++;
        }else {
            count--;
        }
      }

      count = 0;
      for(int i=0; i<nums.size(); i++){
        if(candidate == nums[i]){
            count++;
        }
      }
      if(count > nums.size() / 2) return candidate;
      return -1;
    }
};