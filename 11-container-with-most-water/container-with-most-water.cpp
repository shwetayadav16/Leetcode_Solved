class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        int i=0;
        int j=n-1;
        while(i<j){
                int mini=min(height[i],height[j]);
                area=max(area,(j-i)*mini);
                if(height[i]<height[j]) i++;
                else j--;
        }
        return area;
    }
};