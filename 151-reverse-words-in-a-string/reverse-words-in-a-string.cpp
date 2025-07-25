class Solution {
public:
    string reverseWords(string s) {
        vector<string>tokens;
        string token;
        stringstream ss(s);
        string res="";
        while(ss>>token){
            tokens.push_back(token);
        }
        int n=tokens.size();
        reverse(tokens.begin(),tokens.end());
        for(int i=0;i<n;i++){
            res+=tokens[i];
            if(i!=tokens.size()-1){
                res+=" ";
            }
        }
        return res;
    }
};