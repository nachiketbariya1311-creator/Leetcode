class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                if(mid==nums.size()-1) return mid+1;
                else if(nums[mid+1]>target) return mid+1;
                else lo=mid+1;
            } 
            else   hi=mid-1;
            //else lo=mid+1;
        }
      return 0;  
    }
};