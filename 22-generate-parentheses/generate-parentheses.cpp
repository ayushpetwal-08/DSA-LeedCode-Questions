class Solution {
public:
    void  genrator(int n, string &str, vector<string>& ans, int open, int close){
        if(open == n && close == n){
            ans.push_back({str});
            return ;
        }
        if(open < n){
            str += "(";
            genrator(n, str, ans, open+1, close);
            str.pop_back();
        }
        if(close < open){
            str += ")";
            genrator(n, str, ans, open, close+1);
            str.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string str = "";
        vector<string> ans;
        genrator(n, str, ans, 0, 0);
        return ans;
    }
};