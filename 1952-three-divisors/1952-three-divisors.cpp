class Solution {
public:
    bool isThree(int n) {
        // int k=0;
        // int i=1;
        // while(i<=n){
        //     if(n%i==0) k++;
        //     i++;
        // }
        // if(k==3) return true;
        // return false;

    int root = sqrt(n);

    if (root * root != n)
        return false;

    for (int i = 2; i * i <= root; i++) {
        if (root % i == 0)
            return false;
    }

    return root > 1;
   }
};