class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pro=0;
        int min_price=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_price) min_price=prices[i];
            else if(prices[i]>min_price) 
            max_pro=max((prices[i]-min_price),max_pro);
        }
        return max_pro;
    }
};