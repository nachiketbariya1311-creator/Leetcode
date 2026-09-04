class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        int i=0;
        int j=0;
        int k=n;
        while(j<n||k<2*n){
            if(i%2==0){
                ans[i]=nums[j];
                j++;
            }
            else{
                ans[i]=nums[k];
                k++;
            }
         i++;
        }
        return ans;   
    }
};