class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val=0;
        for(string s:operations){
            if(s=="++X"||s=="X++"){
                val++;
            }
            else{
                val--;
            }
        }
        return val;
    }
};