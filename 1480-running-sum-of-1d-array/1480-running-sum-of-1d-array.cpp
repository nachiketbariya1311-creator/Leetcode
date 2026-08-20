class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {   
        vector<int>sums;
        int n=nums.size();
       for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<=i;j++){
        sum=sum+nums[j];
        }
       sums.push_back(sum);
       }  
       return sums; 
    }
};