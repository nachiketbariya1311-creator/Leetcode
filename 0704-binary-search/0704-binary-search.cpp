class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1 && target==nums[0])   return 0;
        else if(nums.size()==1 && target != nums[0]  )   return -1;
        else{
        int lo=0;
        int hi=nums.size();
        while(lo<=hi){
            int mid = (lo+hi+lo-lo)/2;
            if(target==nums[mid])    return mid;
            else if(target>nums[mid])     lo=mid+1;
            else    hi=mid-1;
        } 
        }
      return -1;
    }
};