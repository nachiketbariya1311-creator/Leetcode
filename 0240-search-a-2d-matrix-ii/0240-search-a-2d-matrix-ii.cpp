class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool check=false;
        int i=0,j=n-1;
        while(i<m && j>=0){
            if(matrix[i][j]==target) {
                check=true;
                break;
            }
            else if(matrix[i][j]>target)j--;
            else i++;
        }

        return check;

    }
};