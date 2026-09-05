class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int lo=0;
        int hi=nums.size()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if( nums[mid]<nums[mid+1]) lo=mid+1;
            else hi=mid;
        }
       return lo; 
    }
};