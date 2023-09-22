class Solution {
public:
const int mod = 1e9 + 7;
    long long solve(long long int x,long long int n){
        if(n==0)return 1;
        long long ans = solve(x,n/2);
        ans = (ans*ans)%mod;

        if(n%2==1){
            ans=(ans*x)%mod;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = (n+1)/2;
        return (solve(5,even)*solve(4,odd))%mod;
    }
};