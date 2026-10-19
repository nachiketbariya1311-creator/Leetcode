class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int ls=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[ls]=nums[i];
                ls++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                ans[ls]=nums[i];
                ls++;
            }
        }
       return ans;
    }
};