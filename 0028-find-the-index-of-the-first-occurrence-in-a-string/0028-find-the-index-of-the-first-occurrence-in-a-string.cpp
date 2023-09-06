class Solution {
public:
    int strStr(string haystack, string needle) {
        unordered_map<char,int>ne;

        unordered_map<char,int>w;
        for(auto i : needle)ne[i]++;
        int l=0,r=0,n = needle.size();
        while(r<=haystack.size()){
            if(r-l<n){
                w[haystack[r]]++;
                r++;
                
            }
            else{
                
                if(ne==w){
                    bool flag=1;
                    for(int i=0;i<n;i++){
                        if(haystack[l+i]!=needle[i]){
                            flag=0;
                            break;
                        }
                    }
                    if(flag)return l;
                }
                
                w[haystack[l]]--;
                if(w[haystack[l]]==0)w.erase(w.find(haystack[l]));
                l++;
            }
        }
        return -1;
    }
};