class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int>v={-1,-1};
        int lo=0,hi=nums.size()-1;

        while(lo<=hi){
            int mid= lo + (hi-lo)/2;
            if(target ==nums[mid] ){
                if(mid==0||target!=nums[mid-1]){
                    v[0]=mid;
                    break;
                }
                hi= mid-1;
                }

            
            else if(target>nums[mid]) lo=mid+1;
            else hi=mid-1;  
        }

        lo=0;
        hi=nums.size()-1;

         while(lo<=hi){
            int mid= lo + (hi-lo)/2;
            if(target ==nums[mid] ){
                 if (mid == nums.size() - 1 || nums[mid + 1] != target) {
                    v[1] = mid;
                    break;
                }

                lo = mid + 1;
            }
            else if(target>nums[mid]) lo=mid+1;
            else hi=mid-1;  
        }
        return v;
    }
};