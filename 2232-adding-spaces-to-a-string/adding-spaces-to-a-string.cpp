class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.size();
        int k=0;
        string result="";
        for(int i=0;i<n;i++){
            if(k < spaces.size() && i==spaces[k]){
                k++;
               result+=' ';
            }
            result+=s[i];
        }
        return result;
    }
};