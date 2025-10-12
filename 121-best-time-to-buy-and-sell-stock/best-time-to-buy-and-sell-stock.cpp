class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;

        int maxCurrent = 0;
        int maxSoFar = 0;

        for (int i = 1; i < n; i++) {
            int diff = prices[i] - prices[i - 1];  // daily change
            maxCurrent = max(0, maxCurrent + diff);
//waise hi hai jaise sum karte jao aur aur jab negative mile toh 0 karke phir se maximum find karte jao
            maxSoFar = max(maxSoFar, maxCurrent);
        }

        return maxSoFar;
    }
};