class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if ((mid == 0 || nums[mid] != nums[mid - 1]) &&
                (mid == n - 1 || nums[mid] != nums[mid + 1])) {
                return nums[mid];
            }

            if(nums[mid]==nums[mid-1] && (mid-low+1)%2==0){
                low=mid+1;
            }
            else if(nums[mid]==nums[mid-1] && (mid-low+1)%2!=0){
                high=mid-2;
            }
            else if(nums[mid]==nums[mid+1] && (high-mid)%2==0){
                low=mid+2;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};