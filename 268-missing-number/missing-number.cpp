class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int cal_xor=0;
        int act_xor=0;
        for(int i=0;i<n;i++){
            act_xor=act_xor^nums[i];
            cal_xor=cal_xor^i;
        }
        cal_xor=cal_xor^n;
        return act_xor^cal_xor;
    }
};