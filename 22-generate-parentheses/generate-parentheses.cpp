class Solution {
public:
    void  genrator(int n, string str, vector<string>& ans, int open, int close){
        if(open == n && close == n){
            ans.push_back(str);
            return ;
        }
        if(open < n){
            genrator(n, str + "(", ans, open+1, close);
        }
        if(close < open){
            genrator(n, str + ")", ans, open, close+1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        genrator(n, "", ans, 0, 0);
        return ans;
    }
};