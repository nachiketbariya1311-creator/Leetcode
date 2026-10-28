class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pp(n);
        vector<int>sp(n);
        pp[0]=nums[0];
        sp[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pp[i]=pp[i-1]*nums[i];
            sp[n-1-i]=sp[n-i]*nums[n-1-i];
        }
         vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(i==0) ans[i]=sp[1];
            else if(i==n-1) ans[i]=pp[n-2];
            else ans[i]=pp[i-1]*sp[i+1];
        }

        return ans;
    }
};