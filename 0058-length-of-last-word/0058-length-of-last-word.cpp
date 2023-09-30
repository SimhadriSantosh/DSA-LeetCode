class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size()-1;
        while(s[j]==' ')j--;
        int count=0;
        while(j>=0 && s[j]!=' '){
            count++;
            j--;
        }
        return count;
    }
};