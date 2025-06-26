class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int target_val=target-'a';
        int low=0;
        int high=n-1;
        int res=letters[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(letters[mid]-'a'<=target_val){
                low=mid+1;
            }
            else{
                res=letters[mid];
                high=mid-1;
            }}
            return res;
          
    }
};