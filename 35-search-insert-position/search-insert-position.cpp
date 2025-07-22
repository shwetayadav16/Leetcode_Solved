class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(target<=nums[0]){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(target>=nums[i]&&target<=nums[i+1]){
                return i+1;
            }
        }
        return n;
    }
};