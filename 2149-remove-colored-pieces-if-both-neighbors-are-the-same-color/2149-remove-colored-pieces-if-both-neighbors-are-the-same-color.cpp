class Solution {
public:
    bool winnerOfGame(string c) {
        int a=0,b=0;
        for(int i=1;i<c.size()-1;i++){
            if(c[i-1]==c[i+1] && c[i-1] == c[i]){
                if(c[i]=='A')a++;
                else b++;
            }
        }
        return a>b;
    }
};