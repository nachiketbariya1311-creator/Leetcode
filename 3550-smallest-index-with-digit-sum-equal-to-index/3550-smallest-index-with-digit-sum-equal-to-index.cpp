class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int ans=0;
           while(nums[i]>0){
            ans=ans+(nums[i]%10);
            nums[i]=nums[i]/10;
           }
           if(ans==i)  {
            return i;
            break;
            }
        }
        return -1;
    }
};