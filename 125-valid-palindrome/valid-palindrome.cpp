class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0){
            return true;
        }
        string cleanStr = "";
        for(int i=0; i<s.length(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z')){
                cleanStr += tolower(s[i]);
            }
        }

        int p1 = 0;
        int p2 = cleanStr.length() - 1;
        while(p1 < p2){
            if(cleanStr[p1] == cleanStr[p2]){
                p1++;
                p2--;
            }else {
                return false;
            }
        }
        return true;
    }
};