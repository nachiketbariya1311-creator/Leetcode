class Solution {
public:
    int arrangeCoins(int n) { 
        long long lo=1;
        long long hi=n;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            long long sum = mid*(mid+1)/2;
            if(n==sum) return int(mid);
            else if(sum<n) lo=mid+1;
            else hi=mid-1;
        }
        return int(hi);
    }
};