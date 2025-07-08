class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int cal_sum=n*(n+1)/2;
        int act_sum=0;
        for(int i:nums){
            act_sum+=i;
        }
        return cal_sum-act_sum;
    }
};