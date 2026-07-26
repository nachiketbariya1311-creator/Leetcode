class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n=nums.size();
        vector<int>ans(n);
        int l=0;
        int r=n-1;
        int i=n-1;
        while(l<=r){
            int ls=nums[l]*nums[l];
            int rs=nums[r]*nums[r];
            if(ls>rs){
                ans[i]=ls;
                l++;
            }
            else{
                ans[i]=rs;
                r--;
            }
            i--;
        }

        return ans;
    }
};