class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(),pizzas.end());
        long long ans = 0;
        int count = ceil(pizzas.size()/8.0);
        int i;
        for( i=pizzas.size()-1;count>0;i--){
            ans+=pizzas[i];
            count--;
        }
        count = pizzas.size()/4 - ceil(pizzas.size()/8.0);
        i-=1;
        while(count--){
            ans+=pizzas[i];
            i-=2;
        }
        return ans;
    }
};