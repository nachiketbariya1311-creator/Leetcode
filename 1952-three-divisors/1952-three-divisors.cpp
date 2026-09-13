class Solution {
public:
    bool isThree(int n) {
        int k=0;
        int i=1;
        while(i<=n){
            if(n%i==0) k++;
            i++;
        }
        if(k==3) return true;
        return false;
        
    }
};