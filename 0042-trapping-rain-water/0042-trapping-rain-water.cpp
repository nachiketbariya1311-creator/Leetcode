class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size()-1;
        vector<int>pgea(n+1);//Previous greatest element array
        vector<int>ngea(n+1);//Next greatest element array
        int max=-1;
        int max2=-1;
        for(int i =0;i<=n;i++){
            pgea[i]=max;
            if(max<height[i]) max=height[i];
            ngea[n-i]=max2;
            if(max2<height[n-i]) max2=height[n-i];
        }
        int v=0;
        for(int i=1;i<n;i++){
            int m=min(pgea[i],ngea[i]);
            if(height[i]<m) v=v+(m-height[i]);
        }
        return v;
        
    }
};