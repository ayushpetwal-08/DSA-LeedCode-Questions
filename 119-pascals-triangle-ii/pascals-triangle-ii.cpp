class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ansRow;
        long long ans = 1;
        ansRow.push_back(ans);
        for(int i=1; i<=rowIndex; i++){
            ans = ans * (rowIndex + 1 - i);
            ans = ans / i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};