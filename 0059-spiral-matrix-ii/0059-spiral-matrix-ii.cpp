class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int minc=0,minr=0,maxc=n-1,maxr=n-1;
        int te=n*n+1;
        int c=1;
        while(minc <= maxc && minr <= maxr){
            for(int i=minc ; i <= maxc && c < te ; i++){
                v[minr][i]=c;
                c++;
            }
            minr++;
            for(int i=minr ; i <= maxr && c < te ; i++){
                v[i][maxc]=c;
                c++;
            }
            maxc--;
            for(int i=maxc ; i >= minc && c < te ; i--){
                v[maxr][i]=c;
                c++;
            }
            maxr--;
            for(int i=maxr ; i >= minr && c < te ; i--){
                v[i][minc]=c;
                c++;
            }
            minc++;
        }
        
        return v;
    }
};
        
