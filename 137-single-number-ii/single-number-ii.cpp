class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int bit = 0; bit < 32; bit++) {
            int count = 0;

            for (int num : nums) {
                if (num & (1 << bit)) {
                    count++;
                }
            }

            if (count % 3 != 0) {
                ans = ans | (1 << bit);
            }
        }

        return ans;
    }
};