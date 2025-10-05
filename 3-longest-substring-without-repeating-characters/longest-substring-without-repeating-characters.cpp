class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // my code basically using sliding window and hash table
        //Time complexity will be O(n)
        //Space complexity will O(n)
        int n=s.size();
        int maxLen=0;
        int start=0;//this varible will help to find the length
        unordered_set<int>st;
        for(int right=0;right<n;right++){//yahi hai jo right mein move karega

        while(st.find(s[right])!=st.end()){//but yahi twist hai is problem mein
            //if not found then it is confirm that right is not in the hash set
            st.erase(s[start]);
            start++;
        }
        st.insert(s[right]);
        maxLen=max(maxLen, right-start+1);
        }
        return maxLen;
    }
};