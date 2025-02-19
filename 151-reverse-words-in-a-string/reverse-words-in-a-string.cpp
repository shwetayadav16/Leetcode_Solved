class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        stack<string>st;
        string word="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(!word.empty()){
                st.push(word);
                word="";
                }
            }
            else{
                word+=s[i];
            }
        }
        if(!word.empty()) st.push(word);
        string ans="";
        while(st.size()>0){
            ans=ans+st.top();
            st.pop();
            if (!st.empty()) ans += " ";
        }
        return ans;
    }
};