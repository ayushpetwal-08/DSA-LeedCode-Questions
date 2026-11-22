class Solution {
public:
    bool checkString(string s) {
        int p = -1;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'b' && s[i+1] == 'a'){
                return false;
            }else if(s[i] == 'a' && s[i+1] == 'b'){
                p = s[i+1];
            }else if(s[i] == p && s[i+1] == 'a'){
                return false;
            }
        }
        return true;
    }
};