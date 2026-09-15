class Solution {
public:
    void subset(vector<vector<int>>& v,vector<int> temp,vector<int>& nums,int idx){
        if(idx==nums.size()) {
            v.push_back(temp);
            return;
        }    
        subset(v,temp,nums,idx+1);
        temp.push_back(nums[idx]);
        subset(v,temp,nums,idx+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        subset(ans,temp,nums,0);
        return ans;
    }
};