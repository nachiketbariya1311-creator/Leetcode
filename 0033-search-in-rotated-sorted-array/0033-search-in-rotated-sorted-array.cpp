class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==2){
            if(nums[0]==target)   return 0;
            else if(nums[1]==target) return 1;
            else return -1;
        }      
        else{
            int lo=0,hi=nums.size()-1,pivot=-1;
                while(lo<=hi){

                    int mid=lo+(hi-lo)/2;

                    if(mid==0) lo = mid + 1;
                    else if(mid==nums.size()-1)  hi =  mid -1;  
                    
                    else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1] ){ 
                        pivot=mid;
                        break;
                    }    
                    else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                        pivot=mid+1;
                        break;
                    }    
                    else if(nums[mid]>nums[hi])   lo = mid + 1;
                    else  hi = mid - 1;

                }

                if(pivot==-1){
                lo=0;
                hi=nums.size()-1;
                while(lo<=hi){

                    int mid=lo+(hi-lo)/2;

                    if(target==nums[mid]){
                        return mid;
                        break;
                    }
                    else if(target>nums[mid])   lo=mid+1;
                    else hi=mid-1;
                }
            }

               else if(target>=nums[0] && target<=nums[pivot-1]){
                lo=0;
                hi=pivot-1;
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;

                    if(target==nums[mid]){
                        return mid;
                        break;
                    }
                    else if(target>nums[mid])   lo=mid+1;
                    else hi=mid-1;
                }  
            }

            else{
                lo=pivot;
                hi=nums.size()-1;
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    if(target==nums[mid]){
                        return mid;
                        break;
                    }
                    else if(target>nums[mid])   lo=mid+1;
                    else hi=mid-1;
                }  

            }
        }    
        return -1;
    }
};