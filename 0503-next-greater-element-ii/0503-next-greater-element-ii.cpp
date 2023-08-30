class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>nge(nums.size(),-1);
        stack<int>st;
        int i=0;
        while(i<nums.size()){
            while(!st.empty() && nums[st.top()]<nums[i]){
                nge[st.top()]=i;
                st.pop();
            }
            st.push(i);
            i++;
        }
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                nge[st.top()]=i;
                st.pop();
            }
        }
        
        for(int i=0;i<nums.size();i++){
            if(nge[i]!=-1)
            nge[i]=nums[nge[i]];
        }
        return nge;
    }
};