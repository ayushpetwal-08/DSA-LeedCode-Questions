int findMax(vector<int>& piles){
    int maxi = INT_MIN;
    for(int i = 0; i<piles.size(); i++){
        if(piles[i] > maxi) maxi = piles[i];
    }
    return maxi;
}
long long calcTotalHours(vector<int>& piles, int hourly){
    long long totalH = 0;
    for(int i=0; i<piles.size(); i++){
        totalH += ceil((double)piles[i] / (double)hourly);
    }
    return totalH;
}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long totalh = calcTotalHours(piles, mid);
            if(totalh <= h){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};