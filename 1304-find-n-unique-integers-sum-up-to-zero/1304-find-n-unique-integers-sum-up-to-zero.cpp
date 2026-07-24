class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v(n,0); 

        int a=1;
        if(n%2!=0)  n--;
        for(int i=0;i<n;i=i+2){
            v[i]=a;
            v[i+1]=-a;
            a++;
        }
        
        return v;
    }
};