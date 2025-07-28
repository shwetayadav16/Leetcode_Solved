class Solution {
public:

int binarySearch(vector<int>& nums, int target,bool isfirst){
    int low = 0, high = nums.size() - 1;
    int index=-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid]==target){
                index=mid;
                if(isfirst){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1; 
            }
        }
        return index;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int left=binarySearch(nums,target,true);
        int right=binarySearch(nums,target,false);
        return {left,right};
    }
};