class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int l=s.size();
        sort(s.begin(),s.end());

        return (s[l-1]-'0')*(s[l-2]-'0');
    }
};