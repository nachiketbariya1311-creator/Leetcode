class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             if(i<j){   
                int temp=matrix[i][j];
              matrix[i][j]=matrix[j][i];
              matrix[j][i]=temp;
            }}}
        for(int i=0;i<n;i++){
            int j=n-1,k=0;
            while(k<j){
                int temp =matrix[i][j];
                matrix[i][j]=matrix[i][k];
                matrix[i][k]=temp;
                j--;
                k++;

            }
            }
            
      return;
    }
};