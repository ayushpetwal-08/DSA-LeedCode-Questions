class Solution {
public:
    int maxArea(vector<int>& height) {
        int mostWater = INT_MIN;
        int p1 = 0, p2 = height.size() - 1;
        while(p1 < p2){
            int minHeight = min(height[p1], height[p2]);
            int width = p2 - p1;
            int volumeWater = minHeight * width;
            mostWater = max(mostWater, volumeWater);
            if(height[p1] < height[p2]){
                p1++;
            }else{
                p2--;
            }
        }
    return mostWater;
    }
};