class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char>st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int p1 = 0, p2 = s.length() - 1;
        while(p1< p2){
            if(st.find(s[p1]) == st.end()){
                p1++;
            }else if(st.find(s[p2]) == st.end()){
                p2--;
            }else {
                swap(s[p1], s[p2]);
                p1++;
                p2--;
            }
        }
        return s;
    }
    private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};