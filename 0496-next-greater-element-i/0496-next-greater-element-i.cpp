class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>nge(nums2.size(),-1);
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
            while(!st.empty() && nums2[i]>nums2[st.top()]){
                nge[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }

        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            if(nge[mp[nums1[i]]]!=-1)
            ans.push_back(nums2[nge[mp[nums1[i]]]]);
            else ans.push_back(-1);
        }
        return ans;
    }
};