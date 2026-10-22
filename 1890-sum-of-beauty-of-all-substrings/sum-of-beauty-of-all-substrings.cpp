class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int cnt = 0;
        for(int i=0; i<n; i++){
            int freq[26] = {0};
            for(int j=i; j<n; j++){
                freq[s[j] - 'a']++;
                int most = 0;
                int least = INT_MAX;
                for(int k=0; k<26; k++){
                    if(freq[k] > 0){
                        most = max(most, freq[k]);
                        least = min(least, freq[k]);
                    }
                }
                cnt += (most - least);
            }
        }
        return cnt;
    }
};