class Solution {
public:
    bool isPerfectSquare(int num) {
        long long lo=1;
        long long hi=(long long)num;
        while(lo<=hi){
            long long  mid = lo + (hi-lo)/2;
            if(mid*mid==(long long)num) return true;
            else if(mid*mid<(long long)num) lo=mid+1;
            else hi=mid-1;
        }
        return false;
    }
};