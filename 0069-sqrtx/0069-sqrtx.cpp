class Solution {
public:
    int mySqrt(int x) {
        int lo =0;
        int hi =x;
        while(lo<=hi){
            long long mid = lo +(hi-lo)/2;
        
            long long z=(long long)x;
            if((mid*mid)==z)   return mid;
            else if ((mid*mid)<z)   lo=mid+1;
            else hi=mid-1;
        }
        return hi;
        
    }
};