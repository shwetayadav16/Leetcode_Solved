
#define mod 1000000007
class Solution {
public:
long long power(long long x, long long n) {
        long long res = 1;
        while (n > 0) {
            if (n % 2 == 1) { // If n is odd
                res = (res * x) % mod;
            }
            x = (x * x) % mod;
            n /= 2;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long no_of_odd_idx=n/2;
        long long no_of_even_idx=n/2+n%2;
        return (power(5,no_of_even_idx)*power(4,no_of_odd_idx))%mod;
    }
};