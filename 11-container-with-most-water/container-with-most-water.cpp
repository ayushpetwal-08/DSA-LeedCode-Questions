class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxWater = 0;
        while(left < right){
            int width = right - left;
            int hight = min(height[left], height[right]);
            int ans = width * hight;
            maxWater = max(maxWater, ans);
            if(height[left] < height[right]){
                left++;
            }else {
                right--;
            }
        }
        return maxWater;
    }
};