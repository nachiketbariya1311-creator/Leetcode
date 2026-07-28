class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(abs(nums[0])>nums[n-1]&&abs(nums[1]>nums[n-2])){
            return (nums[0]-1)*(nums[1]-1);
        }
        else{
        return (nums[n-1]-1)*(nums[n-2]-1);
        }
        return 0;

    }
};