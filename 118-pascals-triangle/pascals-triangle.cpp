class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>result(n);
        for(int i=0;i<n;i++){
            result[i]=vector<int>(i+1,1);
            //1st sur last nahi lena toh uske 1 aur i(alreadyi+1 col hai toh =>(i+1col-1=i))
            for(int j=1;j<i;j++){
                result[i][j]=result[i-1][j]+result[i-1][j-1];
            }
        }
        return result;
    }
};