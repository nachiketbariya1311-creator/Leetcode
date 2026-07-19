class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)  return strs[0];

        sort(strs.begin(),strs.end());

        string s=strs[0];
        string r=strs[strs.size()-1];

        string f="";
        for(int i=0;i<(min(s.size(),r.size()));i++){
            if(s[i]==r[i])   f+=s[i]; 
            else return f;
        }
        return f;
    }
};