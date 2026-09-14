class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int temp = x;
        int reminder = 0;
        long long res = 0;

        while(temp > 0){
            reminder = temp % 10;
            res = (res * 10) + reminder;
            temp = temp / 10;
        }

        return x == res;
    }
};