class Solution {
public:
    string largestOddNumber(string num) {
        if(num.back() % 2 != 0){
            return num;
        } 
        int lastIdx = -1;
        string str = "";
        for(int i=num.length()-1; i>=0; i--){
            if(int(num[i]) % 2 != 0){
                lastIdx = i;
                break;
            }
        }
        if(lastIdx == -1){
            return "";
        }else{
            for(int i=0; i<=lastIdx; i++){
                str.push_back(num[i]);
            }
        }
        return str;
    }
};