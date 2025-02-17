class Solution {
public:
bool isValid(string curr){
    int count=0;
    for(int i=0;i<curr.size();i++){
        if(curr[i]=='(') count++;
        else {
            count--;
            if(count<0) return false;
        }
    }
    return count==0;
}
void solve(int n,string &curr,vector<string>&result){
    if(curr.size()==2*n) {
        if(isValid(curr)){
        result.push_back(curr);
        }
        return;
    }
    curr.push_back('(');
    solve(n,curr,result);
    curr.pop_back();

    curr.push_back(')');
    solve(n,curr,result);
    curr.pop_back();
}
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string curr="";
        solve(n,curr,result);
        return result;
    }
};