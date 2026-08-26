
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int>pos;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        if(neg.size() == 0){
            for(int i=0; i<nums.size(); i++){
                pos[i] = pos[i] * pos[i];
            }
            return pos;
        }
        if(pos.size() == 0){
            for(int i=0; i<nums.size(); i++){
                neg[i] = neg[i] * neg[i];
            }
            reverse(neg.begin(), neg.end());
            return neg;
        }
        int i = 0; 
        int j = 0;
        int id = 0;
        int n = neg.size();
        int m = pos.size();
        vector<int>res(n+m);
        
        for(int i=0; i<n; i++){
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin(), neg.end());
        for(int i=0; i<m; i++){
            pos[i] = pos[i] * pos[i];
        }
        while( i<n && j<m ){
            if(neg[i] <= pos[j]){
                res[id] = neg[i];
                id++;
                i++;
            }else {
                res[id] = pos[j];
                id++;
                j++;
            }
        }
        while( i < n ){
            res[id] = neg[i];
            id++;
            i++;
        }
        while( j < m ){
            res[id] = pos[j];
            id++;
            j++;
        }
        return res;
    }
};