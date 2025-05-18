class Solution {
public:
    int digit_sum(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>sort_nums;
        for(int i=0;i<n;i++){
            sort_nums.push_back({nums[i],i});
        }
        sort(sort_nums.begin(),sort_nums.end(),[this](const pair<int,int>& a,const pair<int,int>&b){
            int sum_a=digit_sum(a.first);
            int sum_b=digit_sum(b.first);
            if(sum_a==sum_b)
                return a.first<b.first;
            return sum_a<sum_b;
        });
        vector<bool>visited(n,false);
        int swaps=0;
        for(int i=0;i<n;i++){
            if(visited[i]||sort_nums[i].second==i)
                continue;
            int c=0;
            int j=i;
            while(!visited[j]){
                visited[j]=true;
                j=sort_nums[j].second;
                ++c;
            }
            if(c>1){
                swaps+=(c-1);
            }
        }
        return swaps;
    }
};