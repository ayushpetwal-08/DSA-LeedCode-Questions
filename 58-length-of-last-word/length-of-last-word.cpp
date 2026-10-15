class Solution {
public:
    int lengthOfLastWord(string s) {
        string str = "";
        for(int i=s.length() - 1; i>= 0; i--){
            if(s[i] == ' ') continue;
            str += s[i];
            if(i-1 >= 0 && s[i-1] == ' '){
                break;
            }
        }
        return str.length();
    }
};