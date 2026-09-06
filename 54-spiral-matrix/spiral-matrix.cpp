class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        int top = 0, left = 0;
        int right = m - 1, bottom = n - 1;
        while (top <= bottom && left <= right) {
            // for left-to-right (right)
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            // for top-to-bottom (bottom)
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bottom){
            // for right-to-left (left)
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left <= right) {
            // for bottom-to-top (top)
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }

        return ans;
    }
};