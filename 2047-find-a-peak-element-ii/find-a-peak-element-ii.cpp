class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            int maxRow = 0;
            for(int i=0; i<matrix.size(); i++){
                if(matrix[i][mid] > matrix[maxRow][mid]){
                    maxRow = i;
                }
            }
            int left = (mid > 0) ? matrix[maxRow][mid-1] : -1;
            int right = (mid < matrix[0].size()-1) ? matrix[maxRow][mid+1] : -1;
            if(matrix[maxRow][mid] > left && matrix[maxRow][mid] > right){
                return {maxRow, mid};
            }else if(matrix[maxRow][mid] < right){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return {-1, -1};
    }
};