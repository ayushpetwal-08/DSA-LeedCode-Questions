class Solution {
public:

    int recursionFibo(int n){
        if(n==0 || n==1){
            return n;
        }
        return recursionFibo(n-1) + recursionFibo(n-2);
    }

    int fib(int n) {
        return recursionFibo(n);
    }
};