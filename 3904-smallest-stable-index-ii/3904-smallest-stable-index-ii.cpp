class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        // suffixMin[i] = minimum element from i to n-1
        vector<int>sMin(n);

        sMin[n-1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            sMin[i]=min(nums[i], sMin[i + 1]);
        }

        // Running maximum of nums[0...i]
        int pMax=INT_MIN;

        for(int i = 0; i < n; i++) {
            pMax = max(pMax, nums[i]);

            if(pMax - sMin[i] <= k)
                return i;
        }

        return -1;
    }
};