class Solution {
public:
long long mod =1000000007;
long long power(long long n, long long x){
    n=n%mod;
    long long ans=1;
    while(x>0){
        if(x%2==1){
            ans=(ans*n)%mod;
        }
        x=x/2;
        n=(n*n)%mod;
    }
    return ans;
}

    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=(n+1)/2;
        return (power(5,even)*power(4,odd))%mod;
    }
};