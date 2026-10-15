class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashTable;
        for(char c : magazine){
            hashTable[c]++;
        }
        for(char c : ransomNote){
            if(hashTable.find(c) == hashTable.end() || hashTable[c] == 0){
                return false;
            }
            hashTable[c]--;
        }
        return true;
    }
};