void merge(vector<int>& nums, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }else {
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        nums[i] = temp[i - low];
    }
}
int countPairs(vector<int>& nums, int low, int mid, int high){
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++) {
        while (right <= high && nums[i] > 2 * (long)nums[right]) right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}
int mergeSort(vector<int>& arr, int low, int high){
    int cnt = 0;
    if(low >= high) return cnt;
    int mid = (low + high) / 2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid+1, high);
    cnt += countPairs(arr, low, mid, high);
    merge(arr, low, mid, high);
    return cnt;
}

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size() - 1;
        return mergeSort(nums, 0, n);
    }
};