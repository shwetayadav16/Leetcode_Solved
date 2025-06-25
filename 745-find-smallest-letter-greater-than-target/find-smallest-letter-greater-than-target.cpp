class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int target_num_val=target-'a';
        for(char ch:letters){
            if(ch-'a'>target_num_val){
                return ch;
            }
        }
        return letters[0];
    }
};