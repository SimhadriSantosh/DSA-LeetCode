class Solution {
public:

    void solve(vector<vector<string>>&ans,int n,int col,vector<string>&mat){
        if(col == n){
            ans.push_back(mat);
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

                // if(i-k>=0 && col+k<n && mat[i-k][col+k]=='Q')flag=0;

                // if(i+k<n && col+k<n && mat[i+k][col+k]=='Q')flag=0;
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
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<string>mat(n,s);
        vector<vector<string>>ans;
        solve(ans,n,0,mat);
        return ans;
    }
};