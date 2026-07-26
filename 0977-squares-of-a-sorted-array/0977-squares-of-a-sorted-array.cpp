class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int>nums1;
       int n=nums.size();
       for(int i=0;i<n;i++){
        int x;
        x=nums[i]*nums[i];
        nums1.push_back(x);
       }
       sort(nums1.begin(),nums1.end());

       return nums1;
        
    }
};