class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int charCount[26] = {0};

        for(char c : magazine){
            charCount[c - 'a']++;
        }

        for(char c : ransomNote){
            charCount[c - 'a']--;
            
            if(charCount[c -'a'] < 0) return false;
        }
        return true;
    }
};