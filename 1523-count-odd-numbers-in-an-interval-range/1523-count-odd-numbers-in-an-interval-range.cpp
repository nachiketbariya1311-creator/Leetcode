class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2!=0 && high%2!=0)return (high-low)/2 + 1;
        else if(low%2==0 && high%2!=0){
            low=low+1;
            return (high-low)/2 + 1;
        }
        else if(low%2!=0 && high%2==0){
            high=high-1;
            return (high-low)/2 + 1;
        }
        else {
            low=low+1;
            high=high-1;
            return (high-low)/2 + 1;
        }
      return 0;
    }
};