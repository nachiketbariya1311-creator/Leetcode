class Solution {
public:
    int dayOfYear(string date) {
        int y=(date[0]-'0')*1000+(date[1]-'0')*100+(date[2]-'0')*10+(date[3]-'0');
        int m=(date[5]-'0')*10+(date[6]-'0');
        int ans=(date[8]-'0')*10+(date[9]-'0');
        if(m==1) return ans;
        for(int i=1;i<m;i++){
            if(i==2) {
                ans += (y%400 == 0 || (y%4 == 0 && y%100 != 0)) ? 29 : 28;
                // if(y%400==0) ans+=29; 
                // else if(y%4==0) ans+=29;
                // else  ans+=28;
            }
            else if(i==4||i==6||i==9|| i==11) ans+=30;
            else ans+=31;
        }
        return ans;
    }
};