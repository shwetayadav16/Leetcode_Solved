class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n=s.size();
        int left=0;
        int right=n-1;
        int moves=0;
        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                int r=right;
                while(r>left&&s[left]!=s[r]){
                    r--;
                }
                if(r==left){
                    swap(s[left],s[left+1]);
                    moves++;
                }
                else{
                    while(r<right){
                        swap(s[r],s[r+1]);
                        r++;
                        moves++;
                    }
                    left++;
                right--;
                }
            }
        }
        return moves;
    }
};