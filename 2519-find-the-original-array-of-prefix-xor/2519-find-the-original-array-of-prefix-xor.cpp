class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans(pref.size());
        // ans.push_back(pref[0]);
        ans[0]=pref[0];
        for(int j=1;j<pref.size();j++){          
            ans[j]=pref[j]^pref[j-1];
        }
        return ans;
    }
};