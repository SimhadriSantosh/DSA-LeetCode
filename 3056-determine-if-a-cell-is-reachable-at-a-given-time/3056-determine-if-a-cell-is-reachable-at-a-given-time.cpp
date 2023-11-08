class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy){
            return t>1 || t==0;
        }
        int diag =0;
        diag = min(abs(sx-fx),abs(sy-fy));
        diag+=max(abs(sx-fx),abs(sy-fy))-diag;
        return diag<=t;
        
    }
};