class Solution {
public:
    void solve(string &s, int o,int c ,vector<string>&ans){
        if(o == 0 && c==0){
            ans.push_back(s);
            return;
        }
        if(o){
            s.push_back('(');
            solve(s,o-1,c,ans);
            s.pop_back();
        }
        if(c && o<c){
            s.push_back(')');
            solve(s,o,c-1,ans);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s = "";
        
        solve(s,n,n,ans);
        return ans;
    }
};