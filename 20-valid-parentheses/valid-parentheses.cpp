class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;
                int top=st.top();
                st.pop();
                if(ch==')'&&top!='(') return false;
                if(ch=='}'&&top!='{') return false;
                if(ch==']'&&top!='[') return false;
            }
        }
        return st.empty();
    }
};