class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxarea=0;
        while(i<j){
            int l=j-i;//lenght
            int w=min(height[i],height[j]);//width
            int area=l*w;
            maxarea=max(area,maxarea);
            if(height[i]<=height[j])    i++;
            else j--;
        }
         return maxarea;
    }
};