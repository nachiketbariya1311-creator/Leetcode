class Solution {
public:
    string convertToBase7(int num) {

        if(num==0) return "0";

        bool flag = true;

        if (num < 0) {
            num = -num;
            flag = false;
        }

     string ans = "";

        while (num > 0) {
            int x = num % 7;
            ans += to_string(x);
            num = num / 7;
        }

        reverse(ans.begin(), ans.end());


        if (flag == false)
            ans = "-" + ans;

        return ans;
    }
};