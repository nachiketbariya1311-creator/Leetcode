class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m= grid.size();
        int n=grid[0].size();
//making the f
        for(int i=0;i<m;i++){
                if(grid[i][0]==0){
                    for(int j=0;j<n;j++){
                        if(grid[i][j]==0)  grid[i][j]=1;
                        else grid[i][j]=0;
                    }
                }
            
        }

//flip the columns where no0>no1  
         
        for(int i=0;i<n;i++){
            int no0=0,no1=0; 
            for(int j=0;j<m;j++){
                if(grid[j][i]==0) no0++;
                else no1++;
            }
            if(no0>no1){
               for(int j=0;j<m;j++){
                if(grid[j][i]==0) grid[j][i]=1;
                else grid[j][i]=0;
            } 

            }

        }
        int sum=0;
        for(int i=0;i<m;i++){
            int z=1;
           
             for(int j=n-1;j>=0;j--){
                sum=sum+(grid[i][j]*z);
                z=z*2;
            }
                    
        }
            return sum;
    }
};