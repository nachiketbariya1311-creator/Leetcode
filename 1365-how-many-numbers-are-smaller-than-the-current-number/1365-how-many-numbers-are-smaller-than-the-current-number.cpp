class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int>ans(nums.size());

            for(int i=0;i<nums.size();i++){
                int k=0;
                for(int j=0;j<nums.size();j++){
                 if(nums[i]>nums[j])     k++;
                }
                ans[i]=k;
            }
        return ans;
    }
};