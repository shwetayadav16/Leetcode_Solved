class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;  // Stack to store characters
        
        for (char c : s) {
            if (isalpha(c)) {  // If character is a letter, push to stack
                st.push(c);
            } else if (isdigit(c)) {  // If it's a digit, remove the last letter if stack is not empty
                if (!st.empty()) {
                    st.pop();
                }
            }
        }
        
        // Build the result string from the stack
        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        reverse(result.begin(), result.end());  // Since stack is LIFO, reverse to get correct order
        return result;
    }
};
