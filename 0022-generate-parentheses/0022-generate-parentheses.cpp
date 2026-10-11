class Solution {
public:
    void generate(string s,vector<string>& ans,int c,int o,int n){
        if(c==n){
            ans.push_back(s);
            return;
        }
        if(o<n)  generate(s+'(',ans,c,o+1,n);
        if(c<o)  generate(s+')',ans,c+1,o,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int c=0;
        int o=0;
        generate("",ans,c,o,n);
        return ans;
        
    }
};