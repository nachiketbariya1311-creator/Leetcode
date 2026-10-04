class Solution {
public:

    void subset(vector<vector<int>>& ans, vector<int> temp, vector<int>& nums, int idx) {

        if(idx == nums.size()) {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[idx]);
        subset(ans,temp,nums,idx+1);

        temp.pop_back();

        while(idx+1 < nums.size() && nums[idx] == nums[idx+1]) {
            idx++;
        }

        subset(ans,temp,nums,idx+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;

        vector<int>temp;

        subset(ans,temp,nums,0);

        return ans;
    }
};
