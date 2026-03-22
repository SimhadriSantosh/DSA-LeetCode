class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        long long ans = 0;
        if(n<1000000){
            ans+=n-1000+1;
            return ans;
        }     
        if(n<1000000000){
            ans+=1000000-1000;
            ans+=2*(n-999999);
            return ans;
        }
        if(n<1000000000000){
            ans+=1000000-1000;
            ans+=2*(1000000000-1000000);
            ans+=3*(n-999999999);
            return ans;
        }
        if(n<1000000000000000){
            ans+=1000000-1000;
            ans+=2*(1000000000-1000000);
            ans+=3*(1000000000000-1000000000);
            ans+=4*(n-999999999999);
            return ans;
        }
        else{
            ans+=1000000-1000;
            ans+=2*(1000000000-1000000);
            ans+=3*(1000000000000-1000000000);
            ans+=4*(1000000000000000-1000000000000);
            ans+=5*(n-999999999999999);
            return ans;
        }
        
        return ans;
    }
};