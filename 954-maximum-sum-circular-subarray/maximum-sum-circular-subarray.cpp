class Solution {
public:
int min_sum_subarray(vector<int> &arr,int n){
            int min_sum=arr[0];
            int sum=arr[0];
            for(int i=1;i<n;i++){
                sum=min(arr[i],arr[i]+sum);
                min_sum=min(min_sum,sum);
            }
            return min_sum;
    }
    int max_sum_subarray(vector<int> &arr,int n){
            int max_sum=arr[0];
            int sum=arr[0];
            for(int i=1;i<n;i++){
                sum=max(arr[i],arr[i]+sum);
                max_sum=max(max_sum,sum);
            }
            return max_sum;
    }  
    int maxSubarraySumCircular(vector<int>& arr) {
         int n=arr.size();
      int tot_sum = accumulate(begin(arr), end(arr), 0);
       int min_sum=min_sum_subarray(arr,n);
       int max_sum=max_sum_subarray(arr,n);
        int cir_sum=tot_sum-min_sum;
        if(max_sum > 0) {
            return max(max_sum, cir_sum);
        }
        
        return max_sum;
    }
};