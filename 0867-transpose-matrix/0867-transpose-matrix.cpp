class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       // int r=matrix.size();
        //int c=matrix[0].size();
        vector<vector<int>>T(matrix[0].size(),vector<int>(matrix.size()));
        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                T[i][j]=matrix[j][i];

            }
        }
       return T;
    }
};