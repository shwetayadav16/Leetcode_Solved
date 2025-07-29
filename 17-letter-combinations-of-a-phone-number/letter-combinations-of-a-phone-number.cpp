class Solution {
public:

void backtrack(int index,string digits,string &curr_string,unordered_map<char,string>&phonemap,vector<string>&result){
    if(index==digits.size()){
        result.push_back(curr_string);
        return ;
    }
    for(char c:phonemap[digits[index]]){
        curr_string.push_back(c);
        backtrack(index+1,digits,curr_string,phonemap,result);
        curr_string.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits==""){
            return {};
        }

        unordered_map<char,string>phonemap={
                {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
            };
            vector<string>result;
            string curr_string="";
            backtrack(0,digits,curr_string,phonemap,result);
            
        return result;
    }
};