class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // my code basically using sliding window and hash table
        //Time complexity will be O(n)
        //Space complexity will O(n)
        int n=s.size();
        int maxLen=0;
        for(int i=0;i<n;i++){
            unordered_set<int>seen;
            for(int j=i;j<n;j++){
                if(seen.find(s[j])!=seen.end()){
                    break;
                }
                seen.insert(s[j]);
                maxLen=max(maxLen,j-i+1);
//humko doubt aya tha ki 3 index gadbad ho jayega lekin nahi 3rd par break bhi toh ho raha niche ayega hi nahi 
            }
        }
        return maxLen;
    }
};