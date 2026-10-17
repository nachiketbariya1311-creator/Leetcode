class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]>=nums.size()) return nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=nums.size()-i && nums.size()-i>nums[i-1]) return nums.size()-i;
        }
        return -1;

        
    }
};