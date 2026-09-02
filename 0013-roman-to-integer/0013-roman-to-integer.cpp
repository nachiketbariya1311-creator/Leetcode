class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int ans=0;
        int i=n-1;
        while(i>=0){
            int o=0;
            if(s[i]=='I') o=1;   
            else if(s[i]=='V') {
                if(i!=0 && s[i-1]=='I') o=4;
                else o=5;
            }
            else if(s[i]=='X') {
                if(i!=0 && s[i-1]=='I') o=9;   
                else o=10;
            }
            else if(s[i]=='L') {
                if(i!=0 && s[i-1]=='X') o=40;
                else o=50;
            }
            else if(s[i]=='C') {
                if(i!=0 && s[i-1]=='X') o=90;
                else o=100;
            }
            else if(s[i]=='D') {
                if(i!=0 && s[i-1]=='C') o=400;  
                else o=500;
            }
            else if(s[i]=='M'){
                if(i!=0 && s[i-1]=='C') o=900;   
                else o=1000;
            }
            if(o==4||o==9||o==40||o==90||o==400||o==900)  i-=2;
            else i--; 
            ans+=o;
        }
        return ans;
    }
};