class Solution {
public:
    int integerBreak(int n) {
        if(n==2)return 1;
        if(n==3)return 2;
        int count=1;
        int i=0;
        for(i=0;i<n;i++){
            if((n-i)%3==0 && (i%2)==0)break;
        }
        
        count*=pow(3,(n-i)/3);
        count*=pow(2,i/2);
        return count;
    }
};