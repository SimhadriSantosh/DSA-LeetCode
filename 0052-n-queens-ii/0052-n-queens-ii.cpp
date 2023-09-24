class Solution {
public:
    void solve(int&ans,int n,int col,vector<string>&mat){
        if(col == n){
            ans++;
            return;
        }
        bool flag,flag2=1;
        for(int i=0;i<n;i++){
            flag=1;
            for(int j=0;j<col && flag ;j++){
                if(mat[i][j]=='Q')flag=0;
            }
        
            for(int k=col;k>=0 && flag;k--){
                if(i-k >=0 && mat[i-k][col-k]=='Q')flag=0;

                if(i+k<n && mat[i+k][col-k]=='Q')flag=0;

            }
            if(flag){
                mat[i][col]='Q';
                solve(ans,n,col+1,mat);
                mat[i][col]='.';
                flag2=0;
            }
        }
        if(flag2)return;
    }
    int totalNQueens(int n) {
        string s(n,'.');
        vector<string>mat(n,s);
        int ans=0;
        solve(ans,n,0,mat);
        return ans;
    }
};