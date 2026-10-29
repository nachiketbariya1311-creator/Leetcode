class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        int penalty[n+1];
        int non=0;
        for(int i=0;i<=n;i++){
            penalty[i]=non;
            if(customers[i]=='N') non++; 
        }
        int noy=1;
        for(int i=n;i>=0;i--){
            if(customers[i]=='Y') noy++;
            penalty[i]=penalty[i]+noy;
            
        }
        int minidx=0;
        int m=penalty[0];
        for(int i=0;i<=n;i++){
            if(m>penalty[i]){
               m=penalty[i];
               minidx=i;
            }
        }

        return minidx;
    }
};