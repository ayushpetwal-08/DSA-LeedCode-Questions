class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance = 0;
        string str = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                if(balance > 0){
                    str.append("(");
                }
                balance++;
            }else{
                if(balance > 1){
                    str.append(")");
                }
                balance--;
            }
        }
        return str;
    }
};