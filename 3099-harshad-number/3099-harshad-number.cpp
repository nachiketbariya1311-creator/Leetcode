class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int k=x;
        int sum=0;
        while(k>0){
            sum=sum+(k%10);
            k=k/10;
        }
        if(x%sum==0) return sum;
        return -1;  
    }
};