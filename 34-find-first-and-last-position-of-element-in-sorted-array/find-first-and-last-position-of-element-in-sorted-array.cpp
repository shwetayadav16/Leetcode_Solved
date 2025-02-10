class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fl=-1;
        int ll=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                fl=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                ll=i;
                break;
            }
        }
        return {fl,ll};
    }
};