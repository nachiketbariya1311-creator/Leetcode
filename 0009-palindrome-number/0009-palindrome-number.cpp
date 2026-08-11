class Solution {
public:
    bool isPalindrome(int x) {
        int k =x;
        long long  z;
        while(x>0){
           z=(z*10)+(x%10);
           x=x/10;
        }
           
        if(k==z) return true;
        else return false;
    }
};