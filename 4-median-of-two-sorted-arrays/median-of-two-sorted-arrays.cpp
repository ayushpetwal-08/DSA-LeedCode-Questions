class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merger;
        merger.reserve(n + m); 
        
        int p1 = 0, p2 = 0;
        
        while (p1 < n && p2 < m) {
            if (nums1[p1] < nums2[p2]) {
                merger.push_back(nums1[p1]);
                p1++;
            } else {
                merger.push_back(nums2[p2]);
                p2++;
            }
        }
        
        while (p1 < n) {
            merger.push_back(nums1[p1]);
            p1++;
        }
        
        while (p2 < m) {
            merger.push_back(nums2[p2]);
            p2++;
        } 

        int totalSize = merger.size();
        if (totalSize % 2 != 0) {
            return merger[totalSize / 2]; 
        } else {
            int mid1 = merger[(totalSize / 2) - 1];
            int mid2 = merger[totalSize / 2];
            return (mid1 + mid2) / 2.0; 
        }
    }
};
