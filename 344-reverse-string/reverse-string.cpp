class Solution {
public:
void helper(vector<char>&s,int lt,int rt){
    if(lt>=rt) return;
    swap(s[lt],s[rt]);
    helper(s,lt+1,rt-1);
}
    void reverseString(vector<char>& s) {  
        helper(s,0,s.size()-1);
    }
};