class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int long_con=0;
        for(int num:st){
            if(st.find(num-1)==0){
                int curr_num=num;
                int curr_long=1;
                while(st.find(curr_num+1)!=st.end()){
                    curr_num++;
                    curr_long++;
                }
                long_con=max(curr_long,long_con);
            }
        }
        return long_con;
    }
};