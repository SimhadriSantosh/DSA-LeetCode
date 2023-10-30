class Solution {
public:
    static bool comp(int a,  int b){
        int counta = 0,countb=0;
        int ca=a,cb=b;
        while(a>0){
            if(a&1)counta++;
            a>>=1;
        }
        while(b>0){
            if(b&1)countb++;
            b>>=1;
        }
        if(counta == countb){
            return ca<cb;
        }
        return counta<countb;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};