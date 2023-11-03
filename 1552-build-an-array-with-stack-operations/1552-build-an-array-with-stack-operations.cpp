class Solution {
public:
    vector<string> buildArray(vector<int>& target, int N) {
        string s1="Push",s2="Pop";
        vector<string>ans;
        int n=1;
        for(auto it:target){
            while(n!=it){
                ans.push_back(s1);
                ans.push_back(s2);
                n++;
            }
            ans.push_back(s1);
            n++;
        }
        return ans;
    }
};