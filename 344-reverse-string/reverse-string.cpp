class Solution {
public:
    void reverseString(vector<char>& s) {
        int lt=0;
        int rt=s.size()-1;
        while(lt<rt){
            swap(s[lt],s[rt]);
            lt++;
            rt--;
        }
    }
};