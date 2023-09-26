class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26, 0);
        for (int i = 0; i < s.length(); i++){
            last[s[i] - 'a'] = i; 
        }
        stack<char>st;
        vector<bool>visit(26,0);
        
        for(int i=0;i<s.size();i++){
            if(visit[s[i]-'a']==0){

            while(st.size()>0 && st.top()>s[i] && i<last[st.top()-'a']){
                    visit[st.top()-'a']=0;
                    st.pop();
            }
                st.push(s[i]);
                visit[s[i]-'a']=1;
            }
        }
        string ans = "";
        while(st.size()>0){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};