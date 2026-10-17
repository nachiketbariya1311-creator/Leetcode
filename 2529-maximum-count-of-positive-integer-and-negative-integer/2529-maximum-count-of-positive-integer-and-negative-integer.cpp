class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0;
        int neg=0;
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<=0) lo=mid+1;
            else {
                if(mid>0 && nums[mid-1]>0) hi =mid-1;
                else {
                    pos=nums.size()-mid;
                    break;
                }
            }
        }
        lo=0;
        hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>=0) hi=mid-1;
            else {
                    neg=mid+1;
                    lo=mid+1;
                
            }
        }
       return max(neg,pos);
    }
};