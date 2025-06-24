class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int j=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=0){
                if(i!=j){
                    a[j]=a[i];
                    a[i]=0;
                }
                j++;
            }
        }
    }
};