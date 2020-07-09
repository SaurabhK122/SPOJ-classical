class Solution {
public:
    int fib(int N) {
        if (N==0)
            return 0;
        else if (N==1)
            return 1;
        int t0 = 0, t1 = 1;
        int t2;
        for(int i=2; i<=N; i++){
            t2 = t0 + t1;
            t0 = t1;
            t1 = t2;
        }
        return t1;
    }
};
