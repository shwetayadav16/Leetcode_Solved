class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==1) return x;
        long long N=n;
        double ans=1;
        if(n<0){
            x=1/x;
            N=-N;
        }
        while(N>0){
            if(N%2==1){
                ans=ans*x;
                N=N-1;
            }
            else{
                N=N/2;
                x=x*x;
            }
        }
        return ans;
    }
};