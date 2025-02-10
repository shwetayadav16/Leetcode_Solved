class Solution {
public:
int fl(vector<int>& nums, int target){
    int n=nums.size();
    int f=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            f=mid;
            high=mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return f;
}
int ll(vector<int>& nums, int target){
    int n=nums.size();
    int l=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            l=mid;
            low=mid+1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return l;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=fl(nums,target);
        int last=ll(nums,target);
        return {first,last};
    }
};