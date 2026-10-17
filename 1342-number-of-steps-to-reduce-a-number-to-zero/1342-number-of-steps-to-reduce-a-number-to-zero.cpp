class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        int n=num;
        while(n>0){
            if(n%2!=0) n=n-1;
            else n=n/2;
            ans++;
        }
        
     return ans;
    }
};