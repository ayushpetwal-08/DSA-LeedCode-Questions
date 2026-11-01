class Solution {
public:
    long long power(long long base, long long exp){
        long long res = 1;
        long long MOD = 1e9 + 7;

        while (exp > 0) {
            if (exp % 2 == 1) {
                res = (res * base) % MOD;
            }
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }

    int countGoodNumbers(long long n) {
        long long MOD = 1e9 + 7;

        long long evenIndices = ( n + 1 ) / 2;
        long long oddIndices = n / 2;

        long long first = power(5, evenIndices);
        long long second = power(4, oddIndices);

       long long ans = (first % MOD * second % MOD) % MOD;
       return ans;
    }
};