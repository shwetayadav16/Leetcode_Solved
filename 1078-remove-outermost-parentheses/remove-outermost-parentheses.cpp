class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        stack<char>st;
        for(char ch:s){
            if(ch=='('){
                if(!st.empty()){
                    res+='(';
                }
                st.push('(');
            }else{
                st.pop();
                if(!st.empty()){
                    res+=')';
                }
            }
        }
        return res;
    }
};