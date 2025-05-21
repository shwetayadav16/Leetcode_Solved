class Solution {
public:
    int reverse(int x) {
        int num=x;
        int rev=0;
        while(num!=0){
            int rem=num%10;
            if(rev>INT_MAX/10||(rev==INT_MAX && rem>7)) return 0;
            if(rev<INT_MIN/10||(rev==INT_MIN && rem<-8)) return 0;
            rev=rev*10+num%10;
            num/=10;
        }
        return rev;
    }
};