class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
          int n =nums.size();
       
        
        for(int i=0;i<n;i++){

            int m1=INT_MIN;
            int m2=INT_MAX;

            for(int j=0;j<=i;j++){
                m1=max(m1,nums[j]);
            }
            for(int j=n-1;j>=i;j--){
                m2=min(m2,nums[j]);
            }

            if((m1-m2)<=k)    return i;
        }
        return -1;   
    }
};
