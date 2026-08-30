class Solution {
public:
    bool check(int speed,vector<int>& piles, int h){
        int count = 0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            if(count>h)   return false;
            if(speed>=piles[i])    count++;
            else if(piles[i]%speed==0)    count=count+piles[i]/speed;
            else   count=count+piles[i]/speed+1;
        }
        if(count>h)  return false;
        else return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx=-1;// maximun element in piles
        
        
        for(int i=0;i<piles.size();i++){
            if(piles[i]>mx)     mx= piles[i];
        }

        int lo=1;
        int hi=mx;
        int ans=-1;


        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(check(mid,piles,h)){
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

       return ans;
    }
};