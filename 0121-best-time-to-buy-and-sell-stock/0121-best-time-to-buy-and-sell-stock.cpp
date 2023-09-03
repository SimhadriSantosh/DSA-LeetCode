class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ma=0,mi = INT_MAX,mid=0,diff=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mi){
                mi=prices[i];
                mid=i;
            }
            else if(prices[i]>mi && i>mid){
                ma=prices[i];
                diff = max(diff,ma-mi);
            }
            
        }
        return diff;
    }
};