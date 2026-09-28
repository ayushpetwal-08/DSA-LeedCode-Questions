int checkReqDays(vector<int>& weights, int capacity){
    int days = 1, load = 0;
    for(int i = 0; i<weights.size(); i++){
        if((load + weights[i]) > capacity){
            days = days + 1;
            load = weights[i];
        }else {
            load += weights[i];
        }
    }
    return days;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = weights[0], high = 0;
        for(int i=0; i<weights.size(); i++){
            if(low < weights[i]) low = weights[i]; // maximum element in array : minimum element -> low
            high = high + weights[i];  // sum of all numbers in array : maximum element -> high
        }
        int ans = high;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int reqDays = checkReqDays(weights, mid);
            if(reqDays <= days){
                ans = mid;
                high = mid - 1;
            }else {
                low = mid + 1;
            }
        }
        return ans;
    }
};