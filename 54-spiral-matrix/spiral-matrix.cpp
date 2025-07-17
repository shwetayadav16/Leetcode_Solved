class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;
        int dir=0;
        vector<int>result;
        // dir=0 =>left to right(constant=top row)
        // dir=1 =>top to bottom(constant=right col)
        // dir=2 =>right to left(constant=bottom row)
        // dir=3 =>bottom to top(constant=left col)
        while(left<=right&&top<=bottom){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            if(dir==1){
                for(int i=top;i<=bottom;i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir==2){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(dir==3){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return result;
    }
};