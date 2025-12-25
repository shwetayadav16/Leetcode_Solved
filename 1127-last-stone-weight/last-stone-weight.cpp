class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       
        while(stones.size()>1){
            int n=stones.size();
            sort(stones.begin(),stones.end());
            int s1=stones[n-1];
            int s2=stones[n-2];
            stones.pop_back();
            stones.pop_back();
            if(s1!=s2){
                stones.push_back(s1-s2);
            }
        }
        if(!stones.empty()){
            return stones[0];
        }
        return 0;
    }
};