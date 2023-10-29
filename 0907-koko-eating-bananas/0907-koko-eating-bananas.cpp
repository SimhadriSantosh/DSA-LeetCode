class Solution {
public:
    bool check(vector<int>&piles,int mid,int h){
        long long sum=0;
        for(auto it:piles){
            sum+=ceil(it/(mid*1.0));
        }
        return sum<=h;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(l<=r){
            long long mid = l +(r-l)/2;
            if(check(piles,mid,h)){
                if(ans>mid){
                    ans=mid;
                }
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};