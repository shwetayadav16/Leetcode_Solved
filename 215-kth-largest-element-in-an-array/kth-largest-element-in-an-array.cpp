class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int,vector<int>,greater<int>>min_heap(nums.begin(),nums.begin()+k);
       for(int i=k;i<nums.size();i++){
        if(nums[i]>min_heap.top()){
            min_heap.pop(); //log k
            min_heap.push(nums[i]);//log k
        }
       }
       return min_heap.top();
    }
    //Time complexity---O(nlogk)....because every element is process once and for heap it is taking O(log K)
    //Why log k?
    //1st when pop
//Root element is removed
// Last element moves to root
// Heap property must be restored
// Element may move down the tree

// 2nd when push
// New element is inserted at the bottom
// Heap property restored
// Element may move up the tree
//Space Complexity:O(k)---because we are storing only k element in heap
};