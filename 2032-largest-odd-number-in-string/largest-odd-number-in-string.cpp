class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size();
        while(i>=0){
            if(num[i]%2!=0){
                return num.substr(0,i+1);
            }
            i--;
        }
        return "";
    }
};