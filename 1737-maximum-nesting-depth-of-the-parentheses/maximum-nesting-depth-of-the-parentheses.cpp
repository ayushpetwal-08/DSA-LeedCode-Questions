class Solution {
public:
    int maxDepth(string s) {
        int balance = 0;
        int maxiDepth = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                balance++;
                maxiDepth = max(maxiDepth, balance);
            }else if(s[i] == ')'){
                balance--;
            }
        }
        return maxiDepth;
    }
};