class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        // total T.C= O(n+klogn)
        int n=piles.size();
        priority_queue<int>pq;
        int sum=0;
        //Make pq and find sum
        //for this TC=O(n)
        for(int i=0;i<n;i++){
            pq.push(piles[i]);
            sum+=piles[i];
        }
        //T.C: K*O(logn)
        for(int i=1;i<=k;i++){
            int max_ele=pq.top();//O(1)
            pq.pop();
            int remove=max_ele/2;
            sum-=remove;
            max_ele-=remove;
            pq.push(max_ele);
        }
        return sum;
    }
};