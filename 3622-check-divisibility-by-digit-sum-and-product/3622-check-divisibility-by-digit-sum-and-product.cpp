class Solution {
public:
    bool checkDivisibility(int n) {   
        int sum=0,product=1,k=n;

        while(k>0){
            int lastDigit=0;
            lastDigit=k%10;
            k=k/10;

            sum=sum+lastDigit;
            product=product*lastDigit;
        }
        if(n%(sum+product)==0)    return true;
        
        return false;
    }
};