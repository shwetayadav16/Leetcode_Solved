class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        int k=0;
        while(k<n){
            if(nums[k]==0){
                j=k;
                break;
            }
            k++;
        }
        if(j==-1) return;
        int i=j+1;
        while(i<n){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
            i++;
        }
    }
};