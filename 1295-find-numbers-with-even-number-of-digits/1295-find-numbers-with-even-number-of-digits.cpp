class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int m;
        for(int i=0;i<n;i++){
            string s="";
            m=0;
            s=to_string(nums[i]);
            m=s.size();
            if(m%2==0)     c++;
          

        }

         return c;
    }
};