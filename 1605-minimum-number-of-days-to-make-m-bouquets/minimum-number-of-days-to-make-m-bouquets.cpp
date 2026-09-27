class Solution {
private:
    int calcBouquest_Flowers(vector<int>& bloomDay, int mid, int k) {
        int cntBF = 0;
        int res = 0;
        for(int i = 0; i < bloomDay.size(); i++) {
            if(bloomDay[i] <= mid) {
                cntBF++;
            } else {
                res += (cntBF / k);
                cntBF = 0;
            }
        }
        res += (cntBF / k);
        return res;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = (long long)m * k;
        if(bloomDay.size() < val) return -1;

        int low = bloomDay[0], high = bloomDay[0];
        for(int i = 0; i < bloomDay.size(); i++) {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }

        int ans = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(calcBouquest_Flowers(bloomDay, mid, k) >= m) {
                ans = mid;      
                high = mid - 1;  
            } else {
                low = mid + 1;   
            }
        }
        return ans;
    }
};